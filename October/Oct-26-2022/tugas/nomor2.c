#include <stdio.h>
#include <math.h>
main()
{
    float datar, tegak, miring;
    printf("\n Menghitung Sisi Miring Sigitiga \n");
    printf("\n ...........................................\n");
    printf("Masukkan nilai sisi alas = \t");
    scanf("%f", &datar);
    printf("Masukkan nilai sisi tinggi = \t");
    scanf("%f", &tegak);
    miring = sqrt(pow(datar, 2) + pow(tegak, 2)); /*Penggunaan fungsi pow dan sqrt*/
    printf("Sisi miring segitiga dengan sisi datar % .2f dan sisi tegak % .2f adalah % .2f\n", datar, tegak, miring);
    printf("\n");
}