#include <stdio.h>

int main()
{
    printf("INPUT DATA MAHASISWA \n");
    printf("............................\n\n");

    char Nama[32], NIM[20], prodi[60];

    int Nilai1, Nilai2, Nilai3, Hasil;

    printf("Nama mahasiswa: ");
    gets(Nama);

    printf("NIM: ");
    gets(NIM);

    printf("Prodi: ");
    gets(prodi);

    printf("Nilai 1: ");
    scanf("%i", &Nilai1);

    printf("Nilai 2: ");
    scanf("%i", &Nilai2);

    printf("Nilai 3: ");
    scanf("%i", &Nilai3);

    Hasil = Nilai1 + Nilai2 + Nilai3;

    printf("\n");

    printf("# Data Mahasiswa # \n");
    printf("...................... \n");
    printf("Nama: %s \n", Nama);
    printf("NIM: %s \n", NIM);
    printf("Prodi: %s \n", prodi);
    printf("Jumlah Nilai: %i \n", Hasil);

    return 0;
}