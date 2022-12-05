#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("Masukkan Nilai X = \t");
    scanf("%i", &x);
    x = x << 1; // geser ke kiri 1 bit
    printf("Hasil dari Geser 1 Bit Ke Kiri = % i", x);
}