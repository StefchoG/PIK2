
#include<stdio.h>
#include<stdlib.h>
#define NAME_SIZE ((size_t) 20)

typedef struct Person {
        char age;
        char name[NAME_SIZE];
} t_Person;

typedef struct Node {
        t_Person payload;
        struct Node* next;
} t_Node;

int main()
{
        t_Node* head = NULL;
        t_Person temp = { 0 };

        FILE* fp = fopen("test.txt", "r");
        if (fp != NULL)
        {
                t_Node* new_node = NULL;

                for (; fscanf(fp, "%d | %s\n", &temp.age, temp.name) != EOF; new_node->next = head, head = new_node)
                {
                        new_node = (t_Node*)malloc(sizeof(t_Node));
                        new_node->payload = temp;
                }

                for (; head->next != NULL; head = head->next)
                {
                        printf("%d %s\n", head->payload.age, head->payload.name);
                }

                for (; head->next != NULL; head = head->next)
                {
                        //TO DO
                }

                fclose(fp);
        }
        else
        {
                printf("File cannot be opened!\n");
        }

        return 0;
}
