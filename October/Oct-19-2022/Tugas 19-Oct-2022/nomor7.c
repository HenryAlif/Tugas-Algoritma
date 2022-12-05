#include <stdio.h> //header
int main()
{
    printf("Menghitung besar gravitasi berdasarkan hukum Newton \n");
    printf("........................................................\n");

    float G, m1, m2, m3, r12, r23, F12, F23, Ftotal;

    printf("Masukkan massa 1  \t: ");
    scanf("%f", &m1);
    printf("Masukkan massa 2  \t: ");
    scanf("%f", &m2);
    printf("Masukkan massa 3  \t: ");
    scanf("%f", &m3);
    printf("Masukkan r 1 ke 2 \t: ");
    scanf("%f", &r12);
    printf("Masukkan r 2 ke 3  \t: ");
    scanf("%f", &r23);
    F12 = (m1 * m2) / (r12 * r12);
    printf("Hasil perhitungan F1&2 = %.2f", F12);
    printf(" G Newton\n");
    F23 = (m2 * m3) / (r23 * r23);
    printf("Hasil perhitungan F2&3 = %.2f", F23);
    printf(" G Newton\n");
    Ftotal = (F23 - F12);
    printf("Maka Ftotal adalah %.2f", Ftotal);
    printf(" G Newton\n");
    printf("\n\n\n");
    return 0;
}