/*
 * Scrivete un programma che legga una sequenza di caratteri terminata da un punto e che visualizzi un istogramma
 * con una barra per ogni carattere dell’alfabeto, lunga quanto il numero delle sue occorrenze. Il programma non
 * deve visualizzare le barre delle lettere che non compaiono e non deve fare distinzione fra maiuscole e minuscole
 * (a tal fine potete usare le funzioni dichiarate nel file ctype.h).
 *
 * Prima di scrivere il vostro programma, fatevi queste domande:
 * • E’ necessario memorizzare l’intera frase di input?
 * • Cosa serve memorizzare e quando?
 * Dopo aver scritto il vostro programma, fatevi queste domande:
 * • Quante sono le variabili nel mio programma? (Non saranno troppe?)
 * • Quanto è lo spazio di memoria occupato? Quanto cresce al crescere dell’input?
 * • Stimate il numero di operazioni che svolge il vostro programma.
 * Sulla base delle risposte che avete date, valutate se rivedere il vostro programma . . .
 */

#include <ctype.h>
#include <stdio.h>

#define ALPHABET 26

int main(void)
{
  char c, string[100];
  int f[ALPHABET] = {0}, i = 0, len;

  while ((c = getchar()) != '.') {
    string[i] = c;
    i++;
  }

  string[i] = '\0';

  len = i;

  for (int j = 0; j < len; j++) {
    f[toupper(string[j]) - 'A']++;
  }

  printf("\n");

  for (int j = 0; j < ALPHABET; j++) {
    if (f[j] != 0) {
      printf("%c ", toupper(j + 'A'));

      for (int k = 0; k < f[j]; k++) {
        printf("*");
      }

      printf("\n");
    }
  }

  return 0;
}
