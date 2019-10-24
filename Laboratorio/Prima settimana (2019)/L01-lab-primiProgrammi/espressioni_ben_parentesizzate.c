/*
Una successione di caratteri è un’espressione ben parentesizzata se, per ogni prefisso della successione stessa
(cioè, per ogni possibile segmento iniziale della successione), il numero di parentesi aperte “(” è maggiore o
uguale al numero di parentesi chiuse “)”, e se, complessivamente, il numero di parentesi aperte è uguale al
numero di parentesi chiuse. Questo è ciò che avviene, per esempio, nelle espressioni aritmetiche ben formate.
Scrivete un programma che legga (mediante la funzione getchar() inclusa in stdio.h) una sequenza di
caratteri terminata da . e determini se essa è un’espressione ben parentesizzata. In caso negativo, il programma
dovrà stampare in quale posizione ha identificato un errore, e il tipo di errore.
*/

#include <stdio.h>

int main(void) {
  char ch;
  int closed = 0, count = 0, open = 0;

  do {
    ch = getchar();
    count++;

    if (ch == '(')
      open++;
    else if (ch == ')')
      closed++;

    if (open < closed) {
      printf("La stringa non è un'espressione ben parentesizzata:\n");
      printf("Carattere %d: troppe parentesi chiuse!\n", count);
      return 0;
    }
  } while (ch != '.');

  if (open != closed) {
    printf("La stringa non è un'espressione ben parentesizzata:\n");
    printf("Carattere %d: mancano parentesi chiuse alla fine!\n", count - 1); // Don't want to count '.'
  } else
    printf("La stringa è un'espressione ben parentesizzata\n");

  return 0;
}
