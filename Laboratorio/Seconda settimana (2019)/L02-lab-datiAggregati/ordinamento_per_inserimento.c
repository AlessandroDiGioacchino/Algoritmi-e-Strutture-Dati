/*
 * Scrivete una programma che legga da standard input una sequenza di interi distinti terminati da 0 (potete as-
 * sumere che la sequenza sia formata al più 100 numeri), memorizzandoli in un vettore ordinato: ogni volta che
 * viene letto un nuovo intero, il vettore viene scorso fino a trovare l’esatta collocazione del numero, quindi si crea
 * lo spazio per il nuovo numero spostando in avanti i numeri successivi già memorizzati.
 */

#include <stdio.h>

#define MAX 100

int main(void)
{
  int i = 0, j, n, vect[MAX] = {0}, x;

  scanf("%d", &n);

  if (n == 0)
    return 0;

  vect[i++] = n;

  do {
    scanf("%d", &n);

    if (n == 0)
      break;

    for (int k = 1; k <= i - 1; k++) {
      x = vect[k];
      j = k - 1;

      while (j >= 0 && vect[j] > x) {
        vect[j + 1] = vect[j];
        j--;
      }

      vect[j + 1] = x;
    }

    vect[i++] = n;
  } while(n != 0);

  for (int k = 0; k < i; k++) {
    printf("%d ", vect[k]);
  }

  printf("\n");

  return 0;
}
