#include <stdio.h>

int main()
{
    float a, b, c, d, e = 0;
    printf("Masukkan Nilai A: \t");
    scanf("%f", &a);
    printf("Masukkan Nilai B: \t");
    scanf("%f", &b);
    printf("Masukkan Nilai C: \t");
    scanf("%f", &c);
    printf("Masukkan Nilai D: \t");
    scanf("%f", &d);
    e = (a + b) * c / d;
    printf("Nilai dari e adalah %f", e);
}