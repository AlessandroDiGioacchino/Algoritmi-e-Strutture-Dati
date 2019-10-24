/*
Scrivete un programma che legga in input un numero intero n usando scanf(“%d”, &n) e stabilisca se n
contiene cifre ripetute e in caso affermativo quali.
*/

#include <stdio.h>

int main(void)
{
  int count = 0, f[10] = {0}, flag = 0, n;

  scanf("%d", &n);

  while (n > 0) {
    f[n % 10]++;

    if (f[n % 10] > 1) {
      count++;
      flag = 1;
    }

    n /= 10;
  }

  if (flag == 0) {
    printf("Non ci sono cifre ripetute\n");
  } else {
    printf("Cifre ripetute: ");

    for (int i = 0; i < 10; i++) {
      if (f[i] > 1 && count > 1) {
        printf("%d, ", i);
        count--;
      } else if (f[i] > 1 && count == 1) {
        printf("%d\n", i);
      }
    }
  }

  return 0;
}
