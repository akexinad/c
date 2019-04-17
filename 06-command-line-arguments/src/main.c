#include <stdio.h>

// Main() has a special function in C
// When main() is called, tow arguments are actually passed into the function.
  // the first argument argc (argument count) is an integer value that specifies teh number of arguments typed on the command line.
  // the second argument argv (argument vector) is an array of character pointers (strings)

int main(int argc, char *argv[]) {
  int numberOfArguments = argc;
  char *argument1 = argv[0];
  char *argument2 = argv[1];

  printf("Number of Arguments: %d\n", numberOfArguments);
  printf("Argument 1 is the program name: %s\n", argument1);
  printf("Argument 2 is the command line argument: %s\n", argument2);

  return 0;
}
