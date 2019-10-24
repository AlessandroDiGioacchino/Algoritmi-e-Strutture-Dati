/*
Scrivete un programma che legga una serie di numeri positivi terminata da 0 e ne calcoli la somma. Per leggere
un intero e memorizzarlo nella variabile n potete usare l’istruzione scanf( "%d", &n );
Notate che non c’è motivo per tenere in memoria tutti i numeri letti da standard input, è sufficiente tenere
in memoria l’ultimo letto!
*/

#include <stdio.h>

int main() {
  int n = -1;
  int sum;

  while (n != 0) {
    scanf("%d", &n);
    sum += n;
  }

  printf("%d\n", sum);

  return 0;
}
