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
    printf("Frequenza di %d = %d\n", i, f[i]);
  }

  return 0;
}
