#include <stdio.h> //header untuk import library
int main()
{
    // variable declaration
    float Alas, Tinggi, Luas_Segitiga;
    // input value: alas & tinggi dari segitiga
    printf("Masukkan Alas dari Segitiga \t: ");
    scanf("%f", &Alas);
    printf("Masukkan Tinggi dari Segitiga \t: ");
    scanf("%f", &Tinggi);
    // calculate triangle area
    Luas_Segitiga = (Alas * Tinggi) / 2;
    // print result
    printf("--------------------------------\n");
    printf("Hasil perhitungan dari luas segitiga adalah %.2f\n", Luas_Segitiga);
    return 0;
}