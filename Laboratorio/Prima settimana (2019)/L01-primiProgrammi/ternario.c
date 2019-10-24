/*
Considerate il seguente programma ternario.c.

Il programma fa uso dell’operatore condizionale expr1 ? expr2 : expr3.
Cosa fa il programma? Modificate il messaggio di stampa in modo che sia più esplicativo.
*/

#include <stdio.h>

int main(void) {
  int a, b;

  printf("Inserisci due numeri interi: ");
  scanf("%d%d", &a, &b);
  printf("Il massimo tra %d e %d è %d.\n", a, b, a > b ? a : b);

  return 0;
}
