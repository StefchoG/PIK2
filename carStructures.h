#ifndef CARSTRUCT
#define CARSTRUCT
enum colour {
  black, white, red, green, blue
};
typedef enum colour colour;

struct Vehicle {
  int length;
  char* brand;
  int year;
  colour colour;
};
typedef struct Vehicle veh;

struct Car {
  veh data;
};
typedef struct Car car;

#endif
