#include <stdio.h>
#include <stdlib.h>

int main() {
  int b, i, n, out;
  char c, s[100];
  n = 0;
  out = 0;

  scanf("%d ", &b);

  c = getchar();
  while (c != '.') {
    s[i] = c;
    c = getchar();
    i++;
  }

  for (int j = 0; j < i; j++) {
    s[j] -= 48;
  }

  for (int j = i - 1; j >= 0; j--) {
    if (s[j] != 0 && j == i - 1) {
      n = s[j];
    } else if (s[j] != 0) {
      n = b * s[j];
    } else {
      n = 0;
    }

    for (int k = i - 2 - j; k > 0; k--) {
      n *= b;
    }
    out += n;
  }

  printf("%d\n", out);

  return 0;
}
