#include <stdio.h>


int main()
{

  // BASIC DATA TYPES IN C ////////////////////////////////////

  int;
  // int type is signed integer which means it can a positive negative or zero
  // you can store hecadecimal numbers like so. It must begin with 0x
  int rgbColor = 0xBADA55;

  float;
  // the usual float type
  // float can be assigend as scientific notation like so;
  float sciNum = 1.7e04;

  double;
  // Stores BIGGER NUMBERS
  // if you want to declare a double float:
  double big = 12.7f;

  _Bool;
  _Bool what = 1;

  // OTHER DATA TYPES

  char;
  // is basically a single string in ''
  // also unsigned
  // charS
  // char MUST BE IN '' not "".

  // C offers 3 adjective key words to modify the basic int type TO SAVE SPACE;
  short int hello = 100;
  long int yes = 100L;
  // unsigned int is good if you want to ensure your in stays NON NEGATIVE
  unsigned int;
  long long int;


  // THE ENUM DATA TYPE

  // This is a data type that allows a programmer to define a variable and specify the valid values that could be stored into that variable

  enum primaryColor { red, yellow, blue };

  enum primaryColor myColours;
  // in this example myColours is now equal to teh values of primaryColor
  myColours = red;
  myColours = grey;

  return 0;
}
