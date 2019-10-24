#include <stdio.h>

int main() {
  int a[10], j, n;
  scanf("%d", &n);

  for ( ; ; ) {
    a[j] = n % 10;
    n /= 10;
    if (n == 0) {
      break;
    }

    j++;
  }

  for (int i = 0; i <= j; i++) {
    int temp = a[i];

    for (int k = i + 1; k <= j; k++) {
      if (temp == a[k]) {
        printf("Cifra ripetuta: %d\n", temp);
      }
    }
  }

  return 0;
}
