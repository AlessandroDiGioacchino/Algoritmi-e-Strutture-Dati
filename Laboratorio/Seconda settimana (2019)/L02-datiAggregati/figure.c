#include <math.h>
#include <stdio.h>

typedef struct {
  float x, y;
} Punto;

typedef struct {
  Punto p1;
  Punto p2;
} Rettangolo;

typedef struct {
  float raggio;
  Punto centro;
} Cerchio;

int main (void)
{
  float b, h, area, duep;
  Rettangolo r;

  Cerchio c;

  printf("RETTANGOLO:\n");

  printf("Inserisci le coordinate del punto in basso a sinistra\n");
  scanf("%f%f", &r.p1.x, &r.p1.y);

  printf("Inserisci le coordinate del punto in alto a destra\n");
  scanf("%f%f", &r.p2.x, &r.p2.y);

  b = r.p2.x - r.p1.x;
  h = r.p2.y - r.p1.y;
  area = b * h;
  duep = 2 * (b + h);

  printf("L'area del rettangolo vale %f, il perimetro vale %f\n", area, duep);

  printf("\n---CERCHIO---\n");

  printf("Inserisci la misura del raggio: ");
  scanf("%f", &c.raggio);

  printf("Inserisci le coordinate del centro: ");
  scanf("%f %f", &c.centro.x, &c.centro.y);

  printf("La circonferenza del cerchio è: %.2f\n",
         M_PI * c.raggio);

  printf("L'area del cerchio è: %.2f\n",
         M_PI * c.raggio * c.raggio);

  return 0;
}
