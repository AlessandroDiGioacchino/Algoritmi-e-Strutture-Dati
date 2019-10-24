#include <stdio.h>
#include <stdlib.h>

int main() {
  char c, cpp;
  scanf("%c %c", &c, &cpp);

  int distanza = c - cpp;
  distanza = abs(distanza);
  distanza++;
  printf("%d\n", distanza);

  return 0;
}
