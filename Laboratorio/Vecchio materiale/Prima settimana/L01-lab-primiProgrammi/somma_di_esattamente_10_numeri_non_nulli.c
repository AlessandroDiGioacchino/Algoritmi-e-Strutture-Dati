/*
Scrivete un programma che legga una serie di numeri e ne calcoli la somma; il programma deve terminare
dopo aver letto esattamente 10 numeri diversi da 0. Può essere utile l’utilizzo delle istruzioni continue e/o
break.
*/

#include <stdio.h>

int main() {
  int i, n, sum;

  while (i < 10) {
    scanf("%d", &n);
    sum += n;

    if (n != 0) {
      i++;
    }
  }

  printf("%d\n", sum);

  return 0;
}
