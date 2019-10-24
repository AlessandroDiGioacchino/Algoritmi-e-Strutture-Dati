#include <stdio.h>

int main() {
  int a[100], b, count, n;
  scanf("%d %d", &b, &n);

  for (int i = 0; i < 100; i++) {
    a[i] = n % b;
    n /= b;
    if (n == 0) {
      break;
    }

    count = i + 1;
  }

  for (int i = count; i >= 0; i--) {
    printf("%d", a[i]);
  }

  printf("\n");
  return 0;
}
