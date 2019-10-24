/*
 * Una stringa si dice palindroma se è uguale quando viene letta da destra a sinistra e da sinistra a destra. Quindi
 * “enne” è palindroma, ma “papa” non lo è. Scrivete un programma che legge una stringa terminata da un punto e
 * stabilisce se è palindroma.
 */

#define LENGTH 100

#include <stdio.h>
#include <string.h>

int main(void)
{
  char string[LENGTH];
  int len, len_mezzi;

  scanf("%s", string);

  len = strlen(string);
  len_mezzi = len / 2;

  for (int i = 0; i < len_mezzi; i++) {
    if (string[i] != string[len - i - 1]) {
      // printf("%c\t%c\n", string[i], string[len - i - 1]);
      printf("La stringa \"%s\" non è palindroma\n", string);

      return 0;
    }
  }

  printf("La stringa \"%s\" è palindroma\n", string);
  return 0;
}
