#include <stdio.h>

int main(void)
{
    printf("INPUT DATA MAHASISWA \n");
    printf("************************* \n\n");

    char Nama_Lengkap[50],
        NIM[10],
        Tgl_Lahir[60],
        Prodi[60],
        nohp[60],
        email[200],
        alamat[60],
        Asal_Sekolah[60],
        hobby[60],
        Motto_Hidup[60];

    printf("Nama mahasiswa: ");
    gets(Nama_Lengkap);

    printf("NIM: ");
    gets(NIM);

    printf("Tanggal Lahir: ");
    gets(Tgl_Lahir);

    printf("Prodi: ");
    gets(Prodi);

    printf("No Hp: ");
    gets(nohp);

    printf("Email: ");
    gets(email);

    printf("Alamat Asal:");
    gets(alamat);

    printf("Asal Sekolah:");
    gets(Asal_Sekolah);

    printf("Hobby:");
    gets(hobby);

    printf("Motto Hidup:");
    gets(Motto_Hidup);

    printf("\n");

    printf("# Data Mahasiswa # \n");
    printf("================== \n");
    printf("Nama: %s \n", Nama_Lengkap);
    printf("NIM: %s \n", NIM);
    printf("Tanggal lahir: %s \n", Tgl_Lahir);
    printf("Prodi: %s \n", Prodi);
    printf("No Hp: %s \n", nohp);
    printf("Email: %s \n", email);
    printf("Alamat Asal: %s \n", alamat);
    printf("Hobby: %s \n", hobby);
    printf("Asal Sekolah: %s \n", Asal_Sekolah);
    printf("Motto Hidup: %s \n", Motto_Hidup);

    return 0;
}