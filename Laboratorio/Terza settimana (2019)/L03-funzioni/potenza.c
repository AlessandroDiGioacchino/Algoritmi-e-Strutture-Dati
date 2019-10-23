/*
 * Scrivete una funzione ricorsiva avente due parametri interi b ed e che calcoli la potenza b^e.
 */

#include <stdio.h>

int calcolaPotenza(int b, int e);

int main(void)
{
    int base, esponente;
    scanf("%d%d", &base, &esponente);

    printf("%d\n", calcolaPotenza(base, esponente));

    return 0;
}

int calcolaPotenza(int b, int e)
{
    if (e == 0)
        return 1;

    return b * calcolaPotenza(b, e - 1);
}