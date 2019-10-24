#include <stdio.h>

#define N 9

int main()
{
  int quadrato[N][N] = {{0}}, k = 1;
  int i, j, inew, jnew, nn;

  int sum_col = 0, sum_diag1 = 0, sum_diag2 = 0, sum_row = 0;

  i = 0; j = N/2;
  nn = N * N;

  for (k = 1; k <= nn; k++) {
    quadrato[i][j] = k;

    inew = (i == 0) ? N - 1 : i - 1;
    jnew = (j == N - 1) ? 0 : j + 1;

    if (quadrato[inew][jnew] == 0) {
      i = inew;
      j = jnew;
    } else {
      i++;
    }
  }

  for (int r = 0; r < N; r++) {
    for (int c = 0; c < N; c++) {
      sum_col += quadrato[c][r];
      sum_row += quadrato[r][c];

      if (r == 0) // Controllo la diagonale principale una sola volta
        sum_diag1 += quadrato[c][c];

      if ((r + c) % N == N - 1) // Controllo diagonale secondaria (elementi
                                // in posizione: (0,N-1), (1,N-2), 
                                // (2,N-3), eccetera)
        sum_diag2 += quadrato[r][c];
    }

    if (sum_col != 369 || sum_row != 369)
      return -1;

    if (sum_diag1 != 369)
      return -1;

    sum_col = 0;
    sum_row = 0;
  }

  if (sum_diag2 != 369)
    return -1;

  for (int r = 0; r < N; r++) {
    for (int c = 0; c < N; c++) {
      printf("%2d ", quadrato[r][c]);
    }

    printf("\n");
  }

  return 0;
}
