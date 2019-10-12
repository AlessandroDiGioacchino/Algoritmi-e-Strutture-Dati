/*
Scrivete un programma che dichiari una variabile per ciascuno dei tipi fondamentali e
delle sue rispettive varianti long e short (qualora ammissibili), e ne stampi la dimensione
in byte ottenuta tramite l’operatore sizeof e l’intervallo di valori possibili per tali tipi.
*/

#include <limits.h>
#include <stdio.h>

int main() {
  char c;
  short n;
  int o;
  long p;
  float f;
  double g;

  printf("char: %lu\t\t[%d,%d]\n", sizeof(c), CHAR_MIN, CHAR_MAX);
  printf("short: %lu\t[%d,%d]\n", sizeof(n), SHRT_MIN, SHRT_MAX);
  printf("int: %lu\t\t[%d,%d]\n", sizeof(o), INT_MIN, INT_MAX);
  printf("long: %lu\t\t[%ld,%ld]\n", sizeof(p), LONG_MIN, LONG_MAX);
  printf("float: %lu\tdouble: %lu\n", sizeof(f), sizeof(g));

  return 0;
}
