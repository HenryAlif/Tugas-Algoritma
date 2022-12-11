#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 0, h;
    printf("daftar harga fotokopi @80\n\n");
    // printf("operasi while\n");
    while (a <= 100)
    {
        h= a*80;
        printf("%d \t lembar = \t Rp %d\n \t", a,h);
        a++;
    }
    printf("\n");
    return 0;
}
