#include <stdio.h>

int main() {
  int a[100], count, n;
  for (int i = 0; i < 100; i++) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }

    a[i] = n;
    count++;
  }

  for (int i = count - 1; i >= 0; i--) {
    printf("%d\n", a[i]);
  }

  return 0;
}
