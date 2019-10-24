/*
 * Scrivere un programma che legga un intero n seguito da una sequenza di n interi ordinati
 * (tutti gli interi appartenenti all'insieme {0, 1, 2, . . . , n}, tranne uno),
 * quindi stampi il valore mancante nella sequenza. Ad esempio, su input
 *
 *  7
 *  0 1 2 3 4 6 7
 *
 * il programma deve stampare
 *
 *  5
 *
 * Nota: Prima di scrivere il programma pensate a 3 esempi significativi (e significativamente diversi) su cui testare
 * il programma.
 * Oltre alla correttezza della funzione verrà valutata anche l'efficienza dell'algoritmo usato. Una soluzione che
 * impiega tempo lineare è poco interessante.
 */

#include <stdio.h>

#define MAX 100

int main(void)
{
    int m = 0, n, vect[MAX] = {0};

    scanf("%d", &n);

    int sx = 0;
    int dx = n;

    for(int i = 0; i < n; i++)
        scanf("%d", &vect[i]);

    if (vect[0] != 0) {
        printf("0\n");
        
        return 0;
    }

    if (vect[n - 1] != n) {
        printf("%d\n", n);

        return 0;
    }

    while (dx - sx > 1)
    {
        m = (sx + dx) / 2;

        if (vect[m] == m)
            sx = m;
        else
            dx = m;
    }
    
    printf("%d\n", (vect[sx] + vect[dx]) / 2);

    return 0;
}