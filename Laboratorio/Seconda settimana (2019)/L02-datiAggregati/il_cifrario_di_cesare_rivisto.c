/*
 * Scrivete un programma che legga (usando getchar) un testo da cifrare, sotto forma di una sequenza di caratteri
 * terminata da un punto, poi legga (usando scanf) la chiave di cifratura k e quindi stampi il testo cifrato usando il
 * cifrario di Cesare con chiave k.
 * Suggerimento: osservate cosa cambia rispetto alla versione originaria dell’esercizio, svolta durante l’esercita-
 * zione precedente.
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char c, string[100];
  int i = 0, len;

  while ((c = getchar()) != '.') {
    string[i] = c;
    i++;
  }

  string[i] = '\0';

  len = i;

  scanf("%d", &i);

  for (int j = 0; j < len; j++) {
    if (islower(string[j])) {
      string[j] -= 'a';
      string[j] += i;
      string[j] %= 26;
      string[j] += 'a';
    } else if (isupper(string[j])) {
      string[j] -= 'A';
      string[j] += i;
      string[j] %= 26;
      string[j] += 'A';
    }
  }

  printf("%s\n", string);

  return 0;
}
