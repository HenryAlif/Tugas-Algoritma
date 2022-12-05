#include <stdio.h> 
int main()
{
    
    float A, B, X, Y, Z, Hasil;
    printf("Masukkan nilai A \t: ");
    scanf("%f", &A);
    printf("Masukkan nilai B \t: ");
    scanf("%f", &B);
    printf("Masukkan nilai X \t: ");
    scanf("%f", &X);
    printf("Masukkan nilai Y \t: ");
    scanf("%f", &Y);
    printf("Masukkan nilai Z \t: ");
    scanf("%f", &Z);
    Hasil = (A / B + 6) / (X - Y / Z);
    printf("--------------------------------\n");
    printf("Hasil perhitungan adalah %.2f\n", Hasil);
    return 0;
}