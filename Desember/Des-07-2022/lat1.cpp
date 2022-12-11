#include <stdio.h>
#include <conio.h>

void main()
{
    int i, nilai[10];

    // input nilai mahasiswa//
    printf("Input nilai 10 mahasiswa\n");
    for (i = 0; i < 10; i++)
    {
        printf("Mahasiswa %i: ", i + 1);
        scanf("%i", &nilai[i]);
    }
    // tampilan nilai mahasiswa//

    printf("Nilai mahasiswa yang telah diinput");
    for (i = 0; i < 10; i++);
    {
        printf("%5.0i", nilai[i]);
    }
    // getch();
    return 0;
}