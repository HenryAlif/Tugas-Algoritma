#include <stdio.h>
main()
{
    int a, x, y;
    printf("Masukkan Nilai X = \t");
    scanf("%i", &x);
    printf("Masukkan Nilai Y = \t");
    scanf("%i", &y);
    a = x & y;
    printf("\nHasilnya adalah % i", a);
}