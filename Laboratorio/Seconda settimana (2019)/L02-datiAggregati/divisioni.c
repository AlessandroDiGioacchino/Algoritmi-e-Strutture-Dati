#include <stdio.h>
#define N 10

int main (void)
{
  int b, n, i = 0;
  int c[N] = {0};

  printf("Inserisci il numero da convertire e la base in cui convertirlo: ");
  scanf("%d %d", &n, &b);

  do c[i++] = n % b;
    while ((n /= b) > 0);

  printf("Il numero in base %d è: ", b);
  while(i > 0)
    printf("%d", c[--i]);

  printf("\n");

  return 0;
}
