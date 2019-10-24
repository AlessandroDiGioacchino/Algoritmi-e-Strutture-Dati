/*
2.  Scrivete un altro programma che, usando un ciclo for, stabilisca se un numero n è primo
(ovvero ha per divisori solo 1 e se stesso) oppure no. Cercate di ridurre il numero di istruzioni da eseguire!
Scrivete una nuova versione del programma precedente usando un ciclo while.
*/

#include <math.h>
#include <stdio.h>

int main(void) {
  int i = 2, n;
  scanf("%d", &n);

  int tmp = sqrt(n);

  while (i < tmp) {
    if (n % i == 0) {
      printf("Non è primo\n");
      return 0;
    }

    i++;
  }

  printf("È primo\n");

  return 0;
}
