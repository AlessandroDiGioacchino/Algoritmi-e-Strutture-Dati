/*
La figura riproduce il simbolo di spunta su uno sfondo di puntini (il ramo di sinistra è formato da 3 asterischi
e parte dal bordo sinistro dello schermo, il ramo di destra è formato da n asterischi):
*/

#include <stdio.h>

int main (void) {
  int n, i, j;
  char simbolo;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n + 2; j++) {
      if ((i == n - 3 && j == 0) || (i == n - 2 && j == 1) || (i == n - 1 && j == 2))
        simbolo = '*';
      else if (j == n + 1 - i)
        simbolo = '*';
      else
        simbolo = '.';

      printf ("%c ", simbolo);
    }

    printf ("\n");
  }

  return 0;
}
