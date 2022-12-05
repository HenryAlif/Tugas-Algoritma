#include <stdio.h>
int main()
{
    int Tb, hasil;

    printf("------------------------------------------ \n");
    printf("Program pengukuran Berat Badan Ideal | BMI \n");

    printf("Input Tinggi Badan anda \t");
    scanf("%i", &Tb);

    hasil = (Tb - 100) - (Tb - 100 * 0, 1);
    printf("Maka BB ideal anda adalah %i\t", hasil);
    if (hasil >= '90')
    {
        printf("Berat Berbahaya! \n");
    }
    else if (hasil >= '80')
    {
        printf("Sedikit berlebihan \n");
    }
    else if (hasil >= '70')
    {
        printf("Cukup Baik \n");
    }
    else if (hasil >= '60')
    {
        printf("Cukup Ideal \n");
    }
    else if (hasil >= '50')
    {
        printf("Kurang \n");
    }
    else
    {
        printf("Perbaiki Pola Hidup Anda \n");
    }
    return 0;
}