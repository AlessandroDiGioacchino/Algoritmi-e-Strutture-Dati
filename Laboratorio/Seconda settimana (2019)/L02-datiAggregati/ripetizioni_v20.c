/*
2. Modificate il programma precedente in modo che stampi tutte e solo le cifre che appaiono ripetute nell’in-
put.
*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
  int c, f[10] = {0};

  c = getchar();

  while (c != '.') {
    if (isdigit(c))
      f[c - '0']++;

    c = getchar();
  }

  for (int i = 0; i < 10; i++) {
    if (1 < f[i])
      printf("%d\t", i);
  }

  printf("\n");
  return 0;
}
