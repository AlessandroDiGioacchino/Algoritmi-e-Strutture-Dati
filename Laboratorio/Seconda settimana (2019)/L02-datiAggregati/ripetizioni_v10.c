/*
1. Usando la porzione di codice cifre.c dell’esercizio precedente, scrivete un programma che legga una
sequenza di caratteri arbitrari terminata da ’.’ e stampi tutte e sole le cifre ivi contenute (non è importante
l’ordine in cui appaiono).
*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
  int c;

  c = getchar();

  while (c != '.') {
    if (isdigit(c))
      printf("%c", c);

    c = getchar();
  }

  printf("\n");

  return 0;
}
