#include <stdio.h>
#include <conio.h>
main()
{
    int a, x, y;
    printf("Masukkan Nilai X = \t");
    scanf("%i", &x);
    printf("Masukkan Nilai Y = \t");
    scanf("%i", &y);
    a = x^y;
    printf("Hasilnya adalah %i \t", a);
}