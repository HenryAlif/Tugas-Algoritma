#include <stdio.h>
int main()
{

    float A, X, Y;
    int Z;
    printf("Masukkan nilai A \t: ");
    scanf("%f", &A);
    printf("Masukkan nilai X \t: ");
    scanf("%f", &X);
    printf("Masukkan nilai Y \t: ");
    scanf("%f", &Y);
    Z = A < 2 * Y || X != Y;
    printf("--------------------------------\n");
    printf("Hasil perhitungan adalah %i\n", Z);
    return 0;
}