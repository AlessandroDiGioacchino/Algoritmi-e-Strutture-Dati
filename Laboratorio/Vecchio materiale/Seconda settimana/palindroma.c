/*
Una stringa si dice palindroma se è uguale quando viene letta da destra a
sinistra e da sinistra a destra. Quindi "enne" è palindroma, ma "papa" non
lo è. Scrivete un programma che legga una stringa terminata da ’.’ e
stabilisca se è palindroma. Potete assumere che la stringa sia al più di 100
caratteri.
*/

#include <stdio.h>
#include <string.h>

int main() {
  char s[100];
  char c = getchar();
  int i = 0;

  while (c != '.') {
    s[i] = c;
    c = getchar();
    i++;
  }
  s[i] = '\0';

  for (int j = 0; j < strlen(s) - 1; j++) {
    if ((s[j] != s[strlen(s) - j - 1])) {
      printf("La stringa \"%s\" non è palindroma\n", s);
      return 0;
    }
  }

  printf("La stringa \"%s\" è palindroma\n", s);

  return 0;
}
