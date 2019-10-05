#include <stdio.h>

int main() {
  int i, n;
  scanf("%d", &n);

  // int conta;

  for (i = n; i > 0; i--) {
    if (n % i == 0) {
      printf("%d\n", i);
      // conta++;
    }
  }

  // printf("\n");
  // printf("%d\n", conta);

  return 0;
}
