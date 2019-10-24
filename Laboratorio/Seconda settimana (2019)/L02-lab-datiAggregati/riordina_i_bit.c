/*
 * Si consideri un array A, non vuoto, di n interi, in cui ciascun valore può essere esclusivamente 0 oppure 1. I
 * valori sono presenti senza alcun ordine; è anche possibile che tutti i valori siano uguali.
 * Si scriva un algoritmo lineare che sposti tutti i valori 0 prima di tutti i valori 1. Verrà assegnato punteggio pieno
 * ad algoritmi che scambiano elementi in A, che richiedono memoria ulteriore O(1) (quindi che non sfruttano array
 * ausiliari), e che non sono basati sul conteggio del numero di 0 e 1 presenti.
 * Si scriva un programma che implementa l’algoritmo. Il programma deve leggere da standard input un intero n
 * seguito da una sequenza di n valori 0/1, riordinare l’array e stamparlo. Ad esempio, ricevendo da standard input
 *
 *  7
 *  0 1 1 0 0 0 1
 *
 * il programma deve stampare
 *
 *  0 0 0 0 1 1 1
 */

#include <stdio.h>

#define MAX 100

int main(void)
{
    int n, vect[MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vect[i]);
    }
    
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (vect[left] == 1) {
            int tmp = vect[left];

            vect[left] = vect[right];
            vect[right] = tmp;

            right--;
        }
        else
            left++; 
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vect[i]);
    }
    
    printf("\n");

    return 0;
}