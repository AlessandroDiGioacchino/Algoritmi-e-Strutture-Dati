#define UPPER_BOUND 10

#include <stdio.h>

int main() {
  int i;

  for (i = 1; i <= UPPER_BOUND; i++) {
    printf("%d\n", i * i);
  }

  return 0;
}
