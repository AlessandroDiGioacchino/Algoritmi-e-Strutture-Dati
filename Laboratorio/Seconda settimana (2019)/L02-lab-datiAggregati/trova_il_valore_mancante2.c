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

    while (sx < dx)
    {
        m = (sx + dx) / 2;

        if (vect[m] == m)
            sx++;
        else
            dx = m;
    }
    
    printf("%d\n", (vect[--sx] + vect[dx]) / 2);

    return 0;
}