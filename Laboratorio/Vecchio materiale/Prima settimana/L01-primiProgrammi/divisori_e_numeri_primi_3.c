/*
3. Scrivete un programma che scomponga in fattori primi un numero dato in input.
*/

#include <stdio.h>

int main() {
  int count, n;
  scanf("%d", &n);

  for (int i = n; i > 0; i--) {
    if (n % i == 0) {
      for (int j = 1; j <= i; j++) {
        if (i % j == 0) {
          count++;
        }
      }
      if (count == 2) {
        printf("%d\t", i);
        n /= i;
        i = n + 1;
      }

      count = 0;
    }
  }

  printf("\n");

  return 0;
}
