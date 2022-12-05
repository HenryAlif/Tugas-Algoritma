#include <stdio.h>
main()
{
    int A, B;
    printf("A = ");
    scanf("%i", &A);
    
    printf("B = ");
    scanf("%i", &B);
    
    A = B;
    
    printf("New value\n");
    printf("%i\n", A);
    printf("%i", B);
}