#include <math.h>
#include <stdio.h>

int main() {
  float raggio;

  scanf("%f", &raggio);

  float area = M_PI * raggio * raggio;
  printf("%.2f\n", area);

  return 0;
}
