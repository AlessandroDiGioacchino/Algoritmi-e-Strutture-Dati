#include <stdio.h>

int counter_rec;
int counter_riter;

unsigned long
f_rec(int n);

unsigned long
f_iter1(int n);

unsigned long
f_iter2(int n);

unsigned long
f_riter(unsigned long a, unsigned long b, int n);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%ld\t%ld\n", f_rec(n), f_riter(1, 1, n));
    printf("%d\t%d\n", counter_rec, counter_riter);

    return 0;
}

unsigned long
f_rec(int n)
{
    counter_rec++;

    if (n == 1 || n == 2)
        return 1;

    return f_rec(n - 1) + f_rec(n - 2);
}

unsigned long
f_iter1(int n)
{
    unsigned long f = 0, f1 = 1, f2 = 1;

    if (n == 2 || n == 1)
        return 1;

    while (n-- >= 3)
    {
        f = f1 + f2;
        
        f1 = f2;
        f2 = f;
    }

    return f;
}

unsigned long
f_iter2(int n)
{
    unsigned long f = 0, f1 = 1, f2 = 1;

    if (n == 2 || n == 1)
        return 1;

    for (int i = 3; i <= n; i++)
    {
        f = f1 + f2;
        
        f1 = f2;
        f2 = f;
    }

    return f;
}

unsigned long
f_riter(unsigned long a, unsigned long b, int n)
{
    counter_riter++;

    if (n == 2)
        return a;

    if (n == 1)
        return b;

    return f_riter(a + b, a, n - 1);
}