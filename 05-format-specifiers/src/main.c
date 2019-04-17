#include <stdio.h>

int main()
{
  int sum = 89;
  printf("The sum is %d\n", sum);

  // Format specifiers are used when displaying variables as outputs
  // They specify the type of data of the variable to be displayed.
  // printf needs format specifiers
  // the format-specifier is actually interpolated or MAPPED to the variable in question

  // TYPES OF FORMAT SPECIFIERS
  int q = 33;
  printf("%i \n", q); // INTEGER OR BOOLEAN (since boolean is represented as either 0 or 1)

  _Bool p = 1;
  printf("%i \n", p); // INTEGER OR BOOLEAN (since boolean is represented as either 0 or 1)

  int w = 4.4;
  printf("%f \n", w); // FLOAT

  int e = 4000000;
  printf("%e \n", e); // DOUBLE

  int r = 44444.7353165F;
  printf("%g \n", r); // DOUBLE

  int t = 'a';
  printf("%c \n", t); // CHAR

  return 0;
}
