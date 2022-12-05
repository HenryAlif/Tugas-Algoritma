#include <stdio.h>
int main()
{
    int second, hours, minutes, day;
    printf("Masukan nilai hari : ");
    scanf("%d", &day);
    second = 86400 * day;
    printf("%d hari sama dengan %d detik\n", day, second);
    printf("Masukan nilai jam : ");
    scanf("%d", &hours);
    second = 3600 * hours;
    printf("%d jam sama dengan %d detik\n", hours, second);
    printf("Masukan nilai menit : ");
    scanf("%d", &minutes);
    second = 60 * minutes;
    printf("%d menit sama dengan %d detik", minutes, second);
}