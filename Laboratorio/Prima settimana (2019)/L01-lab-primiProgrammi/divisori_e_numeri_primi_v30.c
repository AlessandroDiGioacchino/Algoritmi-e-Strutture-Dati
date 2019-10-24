// 3.  Scrivete un programma che scomponga in fattori primi un numero dato in input.

#include <stdio.h>

int main(void) {
  int j, n;
  scanf("%d", &n);

  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      for (j = 2; j < i; j++) {
        if (i % j == 0)
          break;
      }

      if (i == j) {
        printf("%d\t", i);
        n /= i;
        i--;
      }
    }
  }

  printf("\n");

  return 0;
}
