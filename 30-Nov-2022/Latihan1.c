// #include <stdio.h>
// void main()
// {
//     int i, j, rows;
//     printf(" Enter a number to define the rows: \n ");
//     scanf("%d", &rows);
//     printf("\n");
//     for (i = rows; i > 0; i--) // define the outer loop
//     {
//         for (j = i; j > 0; j--) // define the inner loop
//         {
//             printf("* "); // print the Star
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int jumlah;

    printf("Input tinggi segitiga: ");
    scanf("%i", &jumlah);
    printf("\n");

    for (int i = 1; i <= jumlah; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}