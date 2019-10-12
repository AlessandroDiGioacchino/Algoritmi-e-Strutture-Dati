// In questo caso la figura è ottenuta alternando caratteri o e +:

#include <stdio.h>

int main (void) {
  int n, i, j;
  char simbolo;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      simbolo = ((i + j) % 2) ? '+' : 'o';
      printf ("%c ", simbolo);
    }

    printf ("\n");
  }

  return 0;
}
