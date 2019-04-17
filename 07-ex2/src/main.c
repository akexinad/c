#include <stdio.h>
#include <stdlib.h>

int main() {
  float height = 4.5;
  float width = 12.8;
  float perimeter = 0.0;
  float area = 0.0;

  perimeter = 2 * (height + width);
  area = height * width;

  printf("Perimeter of a rectangle with a height of %f and a width of %f is %f meters\n", height, width, perimeter);
  printf("Area is %f meters squared\n", area);

  return 0;
}
