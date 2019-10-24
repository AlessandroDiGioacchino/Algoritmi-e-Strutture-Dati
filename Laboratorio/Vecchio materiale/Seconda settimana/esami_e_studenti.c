#include <stdio.h>

int main() {
  int mat[5][5], n;
  for (int r = 0; r < 5; r++) {
    for (int c = 0; c < 5; c++) {
      scanf("%d", &n);
      mat[r][c] = n;
    }
  }

  for (int r = 0; r < 5; r++) {
    int sum = 0;
    for (int c = 0; c < 5; c++) {
      sum += mat[r][c];
    }
    printf("Media numero %d: %d\n", r + 1, sum / 5);
  }

  return 0;
}
