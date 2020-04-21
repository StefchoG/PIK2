#ifndef CARS
#define CARS

void readFile(char* filename, char* mode, car* myCar, char* destinationFile);
int compare(char* colour);
void saveToStructure(int size, char* string, int year, int colour);
void writeFile(char* destinationFile, char* mode, car* myCar);


#endif
