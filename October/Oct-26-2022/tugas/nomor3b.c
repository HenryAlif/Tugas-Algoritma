#include <stdio.h>
int main()
{

    float A, B;
    int C;
    printf("Masukkan nilai A \t: ");
    scanf("%f", &A);
    printf("Masukkan nilai B \t: ");
    scanf("%f", &B);
    C = (14 - A) <= (B * 5);
    printf("--------------------------------\n");
    printf("Hasil perhitungan adalah %i\n", C);
    return 0;
}