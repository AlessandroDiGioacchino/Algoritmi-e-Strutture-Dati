#include <ctype.h>
#include <stdio.h>

int main() {
  int c, f[10] = {0};

  c = getchar ();

  while(c != '.') {
    if(isdigit(c))
      f[c - '0']++;

    c = getchar();
  }

  for (int i = 0; i < 10; i++) {
    if (f[i] != 0)
      printf("%d\t", i);
  }

  printf("\n");

  return 0;
}
