#include "cars.h"
#include "carStructures.h"

void readFile(char* filename, char* mode, car* myCar, char* destinationFile){
  FILE* fp = fopen(filename, mode);

  //file pointer validation.
  if(!fp){
    perror("Can't open file for reading!");
    return 2;
  }

  if(!strcmp(mode, "r")){
    int temp_size;
    int temp_year;
    char* colour;

    while(fscanf(fp, "%d", &temp_size) != EOF){
      char *string = (char*)malloc(sizeof(char) * (temp_size + 1));

      if(string == NULL){
        fclose(fp);
        perror("Can't allocate memory for car's name!");
        return 3;
      }
      //read from csv. %[^,] is used to escape whitespaces as delimiters.
      void(fscanf(fp, ",%[^,],%d,%[^,]\n", string, &temp_year, colour));
      if(!strcmp(desire,string)){
        saveToStructure(temp_size, string, temp_year, compare(colour), &myCar);
      }
      free(string);
    }
  }
  fclose(fp);
}
