#include "Header.h"
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//global variables declaration
const char* input_url = "path to the txt data file";
const char* output_url = "path to the dat bin file";

typedef enum Reason {
    car, electricity, water, food, clothes, gifts, alcohol, fuel, girlfriend, games
}Reason_e;

typedef struct Expense {
    enum Reason reason;
    float value;
    int date;
}Expense_t;

typedef struct Node {
    Expense_t* expense;
    Node* next;
}Node_t;


//used for storing the value and type of the largest expense
//id represents the enum number of the expense
typedef struct Max {
    int value;
    int id;
}Max_t;

//initial head node for the linked list.
Node_t* head = NULL;


int dateToInteger(int dd, int mm, int yy) {
    int date;

    /*adding dd,mm,yy into date*/
    /*an integer has 4 bytes and dd range is 1 to 31 , mm range is 1 to 12 which
     *can be stored in 1 byte, 1 byte and in rest of 2 bytes
     *we can store year.*/

    date = 0;
    date |= (dd & 0xff); /*dd storing in byte 0*/
    date |= (mm & 0xff) << 8; /*mm storing in byte 1*/
    date |= (yy & 0xffff) << 16; /*yy storing in byte 2 and 3*/

    return date;
}

void integerToDate(int* dd, int* mm, int* yy, int date) {

    /*Extracting dd,mm,yy from date (an integer value)*/

    *dd = (date & 0xff); /*dd from byte 0*/
    *mm = ((date >> 8) & 0xff); /*mm from byte 1*/
    *yy = ((date >> 16) & 0xffff); /*yy from byte 2 and 3*/
}

//Function to add a node at the beginning of Linked List. 
//This function expects a pointer to the data to be added
void push(Node_t** ListHead, Expense_t* newData) {

    // Allocate memory for node 
    Node_t* new_node = (Node_t*)malloc(sizeof(Node_t));

    //not sure bout that!
    new_node->expense = (Expense_t*)malloc(sizeof(Expense_t*));
    new_node->next = (*ListHead);

    //not sure bout that too :D
    //Copy contents of new_data to newly allocated memory.
    new_node->expense->reason = newData->reason;
    new_node->expense->value = newData->value;
    new_node->expense->date = newData->date;

    // Change head pointer as new node is added at the beginning
    (*ListHead) = new_node;
}


/*opens a text file and starts reading from it. Every line
is stored in a temporary object and every temporary
object is added to a linked list. Date is converted from
three integers to just a single integer.

*/
void parseFileToLinkedList(char* filename, Node_t** ListHead) {
    FILE* fp = fopen(filename, "r");

    if (fp != NULL) {
        Expense_t tempExpense;
        int dd, mm, yy;

        while (fscanf(fp, "%d | %f | %d/%d/%d\n", &tempExpense.reason, &tempExpense.value, &dd, &mm, &yy) != EOF) {
            tempExpense.date = dateToInteger(dd, mm, yy);
            push(ListHead, &tempExpense);
        }

        fclose(fp);
    }
}

//Writes the results stored in the max structure to a binary file.
void writeResultToBinary(char* filename, Max_t maximum) {
    FILE* fp_b = fopen(filename, "wb");
    if (NULL != fp_b) {
        size_t fwriteresult = fwrite(&maximum, sizeof(Max_t), 1, fp_b);
        fclose(fp_b);
    }
}

void writeArrayToBinary(char* filename, float* array, int size) {
    FILE* fp_b = fopen(filename, "wb");
    if (NULL != fp_b) {
        size_t fwriteresult = fwrite(array, sizeof(int), size, fp_b);
        fclose(fp_b);
    }
}

//used as an entry point for the UI from the hightest expense button
//firsts read everything from the file then iterates the list and
//sums the expenses by type and frees the memmory for the next
//execution. In the end writes the result to a binary file.
void calculateHighestExpense() {
    parseFileToLinkedList((char*)input_url, &head);

    float sum[10] = { 0 };

    while (head != NULL) {
        sum[head->expense->reason - 1] += head->expense->value;

        Node_t* swap = head;
        head = head->next;
        free(swap->expense);
        free(swap);
    }

    Max_t maximum;
    maximum.value = 0;
    maximum.id = 0;
    for (int i = 0; i < 10; i++) {
        if (sum[i] >= maximum.value) {
            maximum.value = sum[i];
            maximum.id = i + 1;
        }
    }

    writeResultToBinary((char*)output_url, maximum);

}

void calculateMonthlyExpense() {
    parseFileToLinkedList((char*)input_url, &head);
    float sum[12] = { 0 };

    while (head != NULL) {
        int dd, mm, yy;
        integerToDate(&dd, &mm, &yy, head->expense->date);
        sum[mm - 1] += head->expense->value;

        Node_t* swap = head;
        head = head->next;
        free(swap->expense);
        free(swap);
    }

    writeArrayToBinary((char*)output_url, sum, 12);
}