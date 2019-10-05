#include <stdio.h>

int main() {
  float a, b, c;

  scanf("%f %f %f", &a, &b, &c);

  if ((b + c) < a || (a + c) < b || (a + b) < c) {
    printf("Non è un triangolo\n");
  } else if (a == b && b == c) {
    printf("È un triangolo equilatero\n");
  } else if (a == b || b == c || a == c) {
    printf("È un triangolo isoscele\n");
  } else {
    printf("È un triangolo scaleno\n");
  }

  return 0;
}
