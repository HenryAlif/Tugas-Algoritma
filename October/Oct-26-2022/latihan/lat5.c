#include <stdio.h>
main()
{
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    c = a < b;
    printf("%d < %d = %d\n", a, b, c);
    c = a > b;
    printf("%d > %d = %d\n", a, b, c);
    c = a <= b;
    printf("%d <= %d = %d\n", a, b, c);
    c = a >= b;
    printf("%d >= %d = %d\n", a, b, c);
    c = a == b;
    printf("%d == %d = %d\n", a, b, c);
    c = a != b;
    printf("%d != %d = %d\n", a, b, c);
}