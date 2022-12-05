#include <stdio.h> //header
int main()
{
    printf("Yuk Hitung Volume Kerucut\n");
    printf("..........................\n");
    const float PI = 3.14;
    float Volume, Jari, Tinggi;

    printf("Masukkan jari-jari \t: ");
    scanf("%f", &Jari);
    printf("Masukkan tinggi \t: ");
    scanf("%f", &Tinggi);
    Volume = (PI * Jari * Jari * Tinggi) / 3;
    printf("-----------------------------------------\n");
    printf("Hasil perhitungan adalah %.2f", Volume);
    printf("\n\n\n");
    return 0;
}