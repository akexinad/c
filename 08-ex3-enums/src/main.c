#include <stdio.h>
#include <stdlib.h>

int main() {
  enum company { GOOGLE, FACEBOOK, XEROX = 10, YAHOO, EBAY, MICROSOFT };

  // enum company companyName1, companyName2, companyName3;
  // companyName1 = XEROX;
  // companyName2 = GOOGLE;
  // companyName3 = EBAY;

  enum company xerox = XEROX;
  enum company google = GOOGLE;
  enum company ebay = EBAY;

  // printf("%i\n", companyName1);
  // printf("%i\n", companyName2);
  // printf("%i\n", companyName3);

  printf("%i\n", xerox);
  printf("%i\n", google);
  printf("%i\n", ebay);

  return 0;
}
