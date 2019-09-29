#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i % 2 == 0) {
        printf("+ ");
      } else {
        printf("o ");
      }
    }
    printf("\n");
  }

  printf("\n");

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
          printf("o ");
        } else {
          printf("+ ");
        }
      }
    } else {
      for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
          printf("+ ");
        } else {
          printf("o ");
        }
      }
    }

    printf("\n");
  }

  printf("\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        printf("| ");
      } else if (i < j) {
        printf("+ ");
      } else {
        printf("o ");
      }
    }

    printf("\n");
  }

  printf("\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + 2; j++) {
      if (j == n + 1 - i) {
        printf("*");
      } else if (i == n - 3 && j == 0 || i == n - 2 && j == 1) {
        printf("*");
      } else {
        printf(".");
      }
    }

    printf("\n");
  }

  return 0;
}
