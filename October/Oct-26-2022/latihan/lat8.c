#include <stdio.h>
#include <conio.h>
main()
{
    int x;
    printf("Masukkan Nilai X = ");
    scanf("% i", &x);
    x = x >> 2; // geser ke kanan 2 bit
    printf("Hasil dari Geser 1 Bit Ke Kanan = % i", x);
}