#include <stdio.h>

int main(void)
{
    char pilihan, ulang;
    do
    {
        printf("##   PEMILIHAN HARI  ## \n");
        printf("============================== \n");
        printf("Pilihan anda: ");
        scanf("%s", &pilihan);

        switch (pilihan)
        {
        case 'A':
        case 'a':
            printf("Anda memilih Hari Senin \n");
            break;
        case 'B':
        case 'b':
            printf("Anda memilih Hari Selasa \n");
            break;
        case 'C':
        case 'c':
            printf("Anda memilih Hari Rabu \n");
            break;
        case 'D':
        case 'd':
            printf("Anda memilih Hari Kamis \n");
            break;
        case 'E':
        case 'e':
            printf("Anda memilih Hari Jum'at \n");
            break;
        case 'F':
        case 'f':
            printf("Anda memilih Hari Sabtu \n");
            break;
        case 'G':
        case 'g':
            printf("Anda memilih Hari Minggu\n");
            break;
        default:
            printf("Menu tidak tersedia \n");
        }
        printf("\n");

        printf("Ingin memilih menu lain (y/t)? ");
        scanf(" %c", &ulang);
        printf("\n");
    } while (ulang != 't');

    printf("Terimakasih... \n");

    return 0;
}