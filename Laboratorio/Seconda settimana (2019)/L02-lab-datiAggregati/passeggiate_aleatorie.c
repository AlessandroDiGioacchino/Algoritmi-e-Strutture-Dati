/*
 * Scrivete un programma che generi una “passeggiata aleatoria” (in inglese random walk in un array bidimensiona-
 * le di dimensione 10 × 10. L’array sarà riempito di caratteri (inizialmente da punti). Il programma dovrà muoversi
 * di elemento in elemento spostandosi ogni volta di un passo in direzione su, giù, destra o sinistra. Gli elementi
 * visitati andranno etichettati con le lettere dalla A alla Z, nell’ordine in cui vengono visitati. E’ importante con-
 * trollare ad ogni passo che la passeggiata non esca dall’array e che non ritorni su posizioni già visitate. Quando
 * si verifica una di queste condizioni, provate in altre direzioni. Se tutte e quattro le direzioni sono bloccate, il
 * programma deve uscire.
 *
 * Suggerimenti
 *  • Per generare a caso una direzione potete usare le funzionitime (da time.h), rand e srand (da stdlib.h).
 *    La chiamata funzione rand() produce un numero apparentemente casuale, ma generato in realtà a partire
 *    da un seme. La funzione srand(n) inizializza il seme; se il seme non viene inizializzato, il suo valore
 *    di default è 1. La chiamata della funzione time(NULL) restituisce data e ora corrente, codificate come un
 *    unico intero; con la chiamata srand(time(NULL)) è possibile differenziare i semi e quindi garantire che
 *    la passeggiata sia diversa ad ogni esecuzione del programma.
 *  • Dopo aver generato un numero con rand(), considerate il suo resto modulo 4. I quattro possibili valori
 *    (0,1,2,3) possono essere usati per indicare le direzioni (rappresentatele con una variabile di tipo enum!).
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10
#define FIRST 65
#define LAST 90

int main(void)
{
  char quadrato[DIM][DIM];
  int direzione, flag0 = 0, flag1 = 0, flag2 = 0, flag3 = 0;
  int i, j, inew, jnew;

  srand(time(NULL));

  for (int r = 0; r < DIM; r++) {
    for (int c = 0; c < DIM; c++) {
      quadrato[r][c] = '.';
    }
  }

  i = 0;
  j = 0;

  for (int k = FIRST; k <= LAST; k++) {
    if (flag0 == 1 && flag1 == 1 && flag2 == 1 && flag3 == 1)
      break;

    quadrato[i][j] = k;

    direzione = rand() % 4;
    switch (direzione) {
      case 0:
      if (j == DIM - 1) {
        flag0 = 1;
        k--;
        break;
      } else
        jnew = j + 1;

      inew = i;

      if (quadrato[inew][jnew] == '.') {
        flag0 = 0;
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;

        i = inew;
        j = jnew;
      } else {
        flag0 = 1;
        k--;
        break;
      }

      break;

      case 1:
      if (i == DIM - 1) {
        flag1 = 1;
        k--;
        break;
      } else
        inew = i + 1;

      jnew = j;

      if (quadrato[inew][jnew] == '.') {
        flag0 = 0;
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;

        i = inew;
        j = jnew;
      } else {
        flag1 = 1;
        k--;
        break;
      }

      break;

      case 2:
      if (j == 0) {
        flag2 = 1;
        k--;
        break;
      } else
        jnew = j - 1;

      inew = i;

      if (quadrato[inew][jnew] == '.') {
        flag0 = 0;
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;

        i = inew;
        j = jnew;
      } else {
        flag2 = 1;
        k--;
        break;
      }

      break;

      case 3:
      if (i == 0) {
        flag3 = 1;
        k--;
        break;
      } else
        inew = i - 1;

      jnew = j;

      if (quadrato[inew][jnew] == '.') {
        flag0 = 0;
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;

        i = inew;
        j = jnew;
      } else {
        flag3 = 1;
        k--;
        break;
      }

      break;
    }
  }

  for (int r = 0; r < DIM; r++) {
    for (int c = 0; c < DIM; c++) {
      printf("%c ", quadrato[r][c]);
    }

    printf("\n");
  }

  return 0;
}
