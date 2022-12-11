#include <stdio.h>

int main(void)
{
    char pick, repeat;
    do
    {
        printf("APLIKASI PEMILIHAN HARI \n");
        printf("************************* \n");
        printf("Ketikan Input A-G (Case Sensitive) : ");
        scanf("%s", &pick);

        switch (pick)
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

        printf("Ingin memilih ulang? (T/F)? ");
        scanf(" %c", &repeat);
        printf("\n");
    } while (repeat != 'f');

    printf("Shutdown, Bye! \n");

    return 0;
}