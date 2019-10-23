/*
 * Scrivete una funzione con parametro un intero n che stabilisca se n è un numero primo. Scrivete la funzione
 * partendo dal programma che avete scritto per l’esercizio 5 della scheda “L01-lab”.
 */

#include <math.h>
#include <stdio.h>

int contaDivisori(int in) 
{
    int count = 0;

    for (int i = 2; i < in; i++)
        if (in % i == 0)
            count++;

    return count;
}

int main(void)
{
    int n, quantiDiv;
    
    (void) scanf("%d", &n);

    quantiDiv = contaDivisori(n);

    if (quantiDiv == 0)
        printf("%d è primo\n", n);
    else
        printf("%d non è primo\n", n);

    return 0;
}
