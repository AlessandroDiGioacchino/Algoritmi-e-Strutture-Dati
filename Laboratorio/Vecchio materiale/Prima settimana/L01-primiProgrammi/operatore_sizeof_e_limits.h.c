#include <limits.h>
#include <stdio.h>

int main() {
  int a;
  short int b;
  long int c;

  char d;

  printf("int: %d\tshort int: %d\tlong int: %d\n", sizeof(a), sizeof(b), sizeof(c));
  printf("\n");

  printf("int: [%d,%d]\n", INT_MIN, INT_MAX);
  printf("short int: [%d,%d]\n", SHRT_MIN, SHRT_MAX);
  printf("long int: [%d,%d]\n", LONG_MIN, LONG_MAX);

  printf("unsigned int: [0,%d]\n", UINT_MAX);
  printf("unsigned short int: [0,%d]\n", USHRT_MAX);
  printf("unsigned long int: [0,%d]\n", ULONG_MAX);
  printf("\n");

  printf("char: %d\n", sizeof(d));
  printf("\n");

  printf("char: [%d,%d]\n", CHAR_MIN, CHAR_MAX);
  printf("signed char: [%d,%d]\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char: [0,%d]\n", UCHAR_MAX);

  return 0;
}
