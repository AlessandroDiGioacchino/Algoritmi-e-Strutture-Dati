/*
Considerate il seguente programma numeri.c.

Infine, modificate il programma in modo che termini dopo aver letto esattamente 10 numeri diversi da 0.
Può essere utile l’utilizzo delle istruzioni continue e/o break.

Modificate il programma precedente in modo da calcolare la media dei numeri inseriti.
*/

#define NUM_INSERITI 10

#include <stdio.h>

int main(void) {
  int i = 0, n, x = 0;
  printf("Inserisci una serie di numeri: ");

  do {
    scanf("%d", &n);
    x = x + n;

    if (n != 0)
      i++;
  } while (i < NUM_INSERITI);

  printf("%d\n", x);
  printf("La media è: %d\n", x / NUM_INSERITI);
  return 0;
}
