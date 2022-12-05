#include <stdio.h>

int main()
{
    const float PHI = 3.14;
    float jari, luas, keliling;

    printf("Masukan jari-jari lingakaran: ");
    scanf("%f", &jari);

    luas = PHI * jari * jari;
    keliling = 2 * PHI * jari;

    printf("\n Luas Lingkaran adalah : %1.2f", luas);
    printf("\n Keliling Lingkaran adalah : %1.2f", keliling);
}