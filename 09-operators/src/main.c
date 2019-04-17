#include <stdio.h>
#include <stdlib.h>

int main() {
  _Bool a = 1;
  _Bool b = 1;
  _Bool result;

  result = a && b;

  printf("%d\n", result);

  return 0;

  // OTHER TYPES OF OPERATORS

  %= // MODULUS AND ASSIGNMENT OPERATOR: It takes modulus using two operands and assigns the result to the left operand.
  C %= A  ~  C = C % A
}
