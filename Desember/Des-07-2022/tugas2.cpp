#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //deklarasi variable dan tipe data
    int paper = 0, hasil, max = 100;
    printf(" \tdaftar harga fotokopi @80\n\n");
    // mengeksekusi kode program dimana A di set sebagai 0
    while (paper <= max)
    {
        hasil= paper*80;
        printf("%d \t lembar = \t Rp %d\n \t", paper,hasil);
        paper++;
    }
    printf("\n");
    return 0;
}
