#include <stdio.h>

int main() {
  int count, i, n;
  scanf("%d", &n);

  for (i = n; i > 0; i--) {
    if (n % i == 0) {
      count++;
    }
  }

  /*
  i = n;
  while (i > 0) {
    if (n % i == 0) {
      count++;
    }

    i--;
  }
  */

  if (count == 2) {
    printf("%d è un numero primo\n", n);
  }

  return 0;
}
