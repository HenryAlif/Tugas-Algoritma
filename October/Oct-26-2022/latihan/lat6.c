#include <stdio.h>
main()
{
    int a = 1, b = 0, c;
    c = a && a;
    printf("c = %d\n", c);
    c = a && b;
    printf("c = %d\n", c);
    c = b && a;
    printf("c = %d\n", c);
    c = b && b;
    printf("c = %d\n", c);
    c = !a;
    printf("c = %d\n", c);
    c = !b;
    printf("c = %d\n", c);
}