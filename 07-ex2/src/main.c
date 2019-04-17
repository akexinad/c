#include <stdio.h>
#include <stdlib.h>

int main() {
  int height = 4;
  int width = 12;
  int perimeter = 0;
  int area = 0;

  perimeter = 2 * (height + width);
  area = height * width;

  printf("Perimeter is %i meters\n", perimeter);
  printf("Area is %i meters squared\n", area);

  return 0;
}
