/*
Svetonio nella Vita dei dodici Cesari racconta che Giulio Cesare usava per le sue corrispondenze riservate
un codice di sostituzione molto semplice, nel quale la lettera chiara veniva sostituita dalla lettera
che la segue di tre posti nell’alfabeto: la lettera A è sostituita dalla D, la B dalla E e così via
fino alle ultime lettere che sono cifrate con le prime.
Più in generale si dice codice di Cesare un codice nel quale la lettera del messaggio chiaro viene spostata
di un numero fisso k di posti, non necessariamente tre.
Partendo dal programma dell’esercizio precedente maiuscolo.c, scrivere un programma che legga da input
il numero k (chiave di cifratura) e il testo da cifrare, sotto forma di una sequenza di caratteri terminata da .
e che emetta in output il testo cifrato; il programma deve cifrare solo le lettere dell’alfabeto,
mantenendo minuscole le minuscole, e maiuscole le maiuscole, mentre deve lasciare inalterati gli altri simboli.
Si consiglia di usare scanf(%d) per leggere k e la funzione getchar() per leggere uno a uno i caratteri
del testo da cifrare.
Notate che non c’è motivo per tenere in memoria tutti i caratteri del testo da cifrare, è sufficiente
tenere in memoria l’ultimo letto!
Per provare se il programma funziona, cifrate un messaggio con una certa chiave k
e poi applicate al risultato una nuova cifratura con chiave 26 − k: il risultato dovrebbe essere la stringa originale.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
  short c, k;

  scanf("%hd ", &k);
  while ((c = getchar()) != '.') {
    if (isalpha(c) && isupper(c)) {
      c += k;
      if (c > 90) {
        c -= 26;
      }
    } else if (isalpha(c) && islower(c)) {
      c += k;
      if (c > 122) {
        c -= 26;
      }
    }

    putchar(c);
  }

  printf("\n");

  return 0;
}
