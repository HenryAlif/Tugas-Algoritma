#include <stdio.h>

int main()
{
    float aktif, tugas, ujian, ma, mt, mu, na;
    char nama[50], nim[50];

    printf("Nama mahasiswa :");
    scanf("%s", &nama);
    printf("NIM :");
    scanf("%s", &nim);

    printf("Nilai Keaktifan :");
    scanf("%f", &aktif);
    printf("Nilai Tugas :");
    scanf("%f", &tugas);
    printf("Nilai Ujian :");
    scanf("%f", &ujian);

    ma = aktif * 0.2;
    mt = tugas * 0.3;
    mu = ujian * 0.5;
    na = ma + mt + mu;

    printf("Nilai Murni Keaktifan = %f\n", ma);
    printf("Nilai Murni Tugas = %f\n", mt);
    printf("Nilai Murni Ujian = %f\n", mu);
    printf("Nilai Nilai Akhir = %f\n", na);

    return 0;
}