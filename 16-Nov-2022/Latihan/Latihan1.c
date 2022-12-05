#include <stdio.h>
main()
{
    float buy, discount;
    char cashier[32], buyer[32];

    printf("-------------------------\n\n");
    printf("HALAL MAKMUR JAYA\n");
    printf("-------------------------\n\n");

    printf("Cashier Name = \t");
    gets(cashier);

    printf("Buyer Name = \t");
    gets(buyer);

    printf("Total Transaction = Rp. ");
    scanf("%f", &buy);

    if (buy < 50000)
    {
        printf("Sorry! you didn't get discount \n");
    }
    if (buy >= 50000)
    {
        printf("Congrats!");
        printf(" %s", buyer);
        printf(" get DISCOUNT 20%% \n" );

        printf("Im");
        printf(" %s", cashier);
        printf(" Happy to help you! see you on next visit!");
    }
}