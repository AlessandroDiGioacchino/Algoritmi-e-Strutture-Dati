/*
Modificate il programma precedente in modo da calcolare la media dei numeri inseriti.
*/

#include <stdio.h>

int main() {
  int n = -1;
  int count, sum;

  while (n != 0) {
    scanf("%d", &n);
    sum += n;
    count++;
  }

  count--;

  printf("%d\t%d\n", sum, sum / count);

  return 0;
}
