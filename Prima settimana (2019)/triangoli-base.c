/*
Considerate il seguente programma triangoli-base.c. Il programma riceve da standard input le lunghezze
dei lati di un triangolo e, in caso affermativo, classifica il triangolo come equilatero, isoscele o scaleno.

Analizzate il programma e modificatelo affinché prima di procedere con la classificazione verifichi la questa
proprietà fondamentale: in un triangolo, ogni lato è più corto della somma degli altri due.
*/

#include <stdio.h>

int main(void) {
  float a, b, c;

  printf("Inserisci tre numeri separati da spazi: ");
  scanf("%f %f %f", &a, &b, &c);

  if ((a + b) < c || (c + a) < b || (b + c) < a)
    printf("Non sono i lati di un triangolo\n");

  else if (a == b && a == c)
    printf("Il triangolo è equilatero\n");

  else if (a == b || a == c || b == c)
    printf("Il triangolo è isoscele\n");

  else
    printf("Il triangolo è scaleno\n");

  return 0;
}
