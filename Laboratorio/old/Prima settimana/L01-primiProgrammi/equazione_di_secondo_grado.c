#include <complex.h>
#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c;
  float complex z1, z2;

  scanf("%f %f %f", &a, &b, &c);

  z1 = -b + csqrtf(b * b - 4 * a * c);
  z2 = -b - csqrtf(b * b - 4 * a * c);

  z1 /= 2 * a;
  z2 /= 2 * a;

  printf("%.2f\t%.2fi\n", crealf(z1), cimagf(z1));
  printf("%.2f\t%.2fi\n", crealf(z2), cimagf(z2));

  return 0;
}
