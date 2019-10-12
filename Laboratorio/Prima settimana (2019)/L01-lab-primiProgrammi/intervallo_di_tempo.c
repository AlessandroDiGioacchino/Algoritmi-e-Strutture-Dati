/*
Scrivete un programma che calcoli l’intervallo di tempo compreso tra due orari. Assumete che sia gli orari che
l’intervallo di tempo siano rappresentati nel formato a 24 ore hh:mm:ss. E’ possibile usare short int invece
che int?
*/

#include <stdio.h>

int main(void) {
  short hh, mm, ss;
  short outh, outm, outs;

  scanf("%hd:%hd:%hd", &outh, &outm, &outs);
  scanf("%hd:%hd:%hd", &hh, &mm, &ss);

  outh = hh - outh;
  outm = mm - outm;
  outs = ss - outs;

  printf("%hd:%hd:%hd\n", outh, outm, outs);

  return 0;
}
