#include <string.h>

#include "cars.h"

//turns the colour from the file to enum integer.
int compare(char* colour){
  if(!strcmp("black", colour))
    return 0;
  else if(!strcmp("white", colour))
    return 1;
  else if(!strcmp("red", colour))
    return 2;
  else if(!strcmp("green", colour))
    return 3;
  else if(!strcmp("blue", colour))
    return 4;

  else{
    perror("Color can NOT be recognised!");
    return -1;
  }
}

void saveToStructure(int size, char* string, int year, int colour, car* myCar){
  myCar->data->length = size;
  myCar->data->brand = string;
  myCar->data->year = year;
  myCar->data->colour = colour;
}
