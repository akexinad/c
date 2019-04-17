#include <stdio.h>

int main()
{
  char str[100];
  int i;

  printf("Enter a value :");
  scanf("%d %s", &i, str);
  // %d tells C that the data we are waiting for is an integer, and we are storing it in i

  printf("\nYou entered: %d and %s\n\n", i, str);

  return 0;
}
