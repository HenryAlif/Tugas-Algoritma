#include <stdio.h>
int main(void)
{
    int totaltransaction, transaction1, transaction2;
    char buyer[40], cashier[40];

    printf("-------------------------------------- \n");
    printf("GEMA INSANI STORE\n");
    printf("-------------------------------------- \n");
    printf("Buyer name : ");
    gets(buyer);
    printf("Cashier Name: ");
    gets(cashier);
    printf("Total transaction : ");
    scanf("%d", &totaltransaction);

    if (totaltransaction >= 50000)
    {
        transaction1 = totaltransaction - 20 * totaltransaction / 100;
        printf("Congrats! you get 20%% discount, you only paid Rp %d \n", transaction1);
    }
    else
    {
        (totaltransaction < 50000);
        transaction2 = totaltransaction - 5 * totaltransaction / 100;
        printf("Congrats! you get 5%% discount, you only paid Rp %d", transaction2);
    }
    return 0;
}