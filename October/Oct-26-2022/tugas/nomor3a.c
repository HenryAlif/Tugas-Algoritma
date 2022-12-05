#include <stdio.h>
int main()
{

    float A, B, C;
    printf("Masukkan nilai A \t: ");
    scanf("%f", &A);
    printf("Masukkan nilai B \t: ");
    scanf("%f", &B);
    C = (A + B - 2) != (B * 20);
    printf("--------------------------------\n");
    printf("Hasil perhitungan adalah %f\n", C);
    return 0;
}