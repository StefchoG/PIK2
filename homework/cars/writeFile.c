#include "cars.h"
#include "carStructures.h"

void writeFile(char* destinationFile, char* mode, car* myCar){
  FILE* fp = fopen(destinationFile, mode);

  //file pointer validation.
  if(!fp){
    perror("Can't open binary file");
    return -9;
  }

  size_t fwriteresult = fwrite(&myCar, sizeof(car), 1, fp);

  fclose(fp);
}
