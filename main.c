#include <stdio.h>

#include "cars.h"
#include "carStructures.h"

int main(int argc, char* argv[]){

  //arguments validation
  if(argc <=1){
    perror("Invalid number of arguments!");
    return 1;
  }

  char* filename = argv[1];
  char* mode = "r";
  char* desire = argv[2]; // make of cars
  char* destinationFile = "cars.dat";

  car myCar;

  //reading from the unary file
  readFile(filename, mode, desire, &myCar, destinationFile);

  mode = "wb";
  writeFile(destinationFile, mode, myCar);

}
