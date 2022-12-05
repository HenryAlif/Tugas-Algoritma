// Program Penggunaan Operator Aritmatika
#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 82, b = 26, hasil1, hasil2, hasil3, hasil4, hasil5;
    printf("Program perhitungan! \n");
    printf("------------------------------ \n");

    /*
    printf("Inputkan nilai A = \t");
    scanf("%i", &a);
    printf("Inputkan nilai B = \t");
    scanf("%i", &b);
    */

    hasil1 = a + b;
    hasil2 = a - b;
    hasil3 = a * b;
    hasil4 = a / b;
    hasil5 = a % b;

    printf("Hasil A + B = %i\n", hasil1);
    printf("Hasil A - B = %i\n", hasil2);
    printf("Hasil A * B = %i\n", hasil3);
    printf("Hasil A / B = %i\n", hasil4);
    printf("Hasil A %% B = %i\n", hasil5);

    return 0;
}
