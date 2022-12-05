#include <stdio.h> //header
#include <math.h>  //header
int main()
{
    double p, result;                                                 // tipe data double
    float param = 6.5;                                                // tipe data float
    result = log(param);                                              // fungsi log
    printf("ln(%lf) = %lf\n", param, result); /* mencetak ke layar */ //
    return 0;
}