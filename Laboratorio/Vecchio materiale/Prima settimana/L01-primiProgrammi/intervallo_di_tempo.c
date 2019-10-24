/*
Scrivete un programma che calcoli l’intervallo di tempo compreso tra due orari. Assumete che sia gli orari che
l’intervallo di tempo siano rappresentati nel formato a 24 ore hh:mm:ss. E’ possibile usare short int invece
che int?
*/

#include <stdio.h>

int main() {
  short int hh1, mm1, ss1, hh2, mm2, ss2;
  scanf("%hd:%hd:%hd", &hh1, &mm1, &ss1);
  scanf("%hd:%hd:%hd", &hh2, &mm2, &ss2);

  // printf("%hd:%hd:%hd\t%hd:%hd:%hd\n", hh1, mm1, ss1, hh2, mm2, ss2);

  printf("%hd:%hd:%hd\n", hh2 - hh1, mm2 - mm1, ss2 - ss1);

  return 0;
}
