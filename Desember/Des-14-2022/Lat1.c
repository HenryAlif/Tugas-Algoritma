#include <stdio.h>

int cari(int n1, int n2);
void export(int m);

main()
{
    int i = 5;
    int j = 7;
    int k;

    k = cari(i, j);
    export(k);

    return 0;
}

int cari(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void export(int m)
{
    printf("Bilangan terbesar adalah: %i\n", m);
}