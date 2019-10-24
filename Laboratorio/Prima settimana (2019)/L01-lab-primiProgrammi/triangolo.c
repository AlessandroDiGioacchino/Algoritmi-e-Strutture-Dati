/*
Il triangolo sotto la diagonale con direzione alto/sx verso basso/dx è formato da o, il triangolo sopra la
diagonale da +, la diagonale da |.
*/

#include <stdio.h>

int main (void) {
  int n, i, j;
  char simbolo;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j)
        simbolo = '|';
      else if (j < i)
        simbolo = 'o';
      else if (i < j)
        simbolo = '+';

      printf ("%c ", simbolo);
    }

    printf ("\n");
  }

  return 0;
}
