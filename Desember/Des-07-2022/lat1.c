#include <stdio.h>
#include <conio.h>

main()
{
    int i, nilai[10];

    printf("Input nilai 10 mahasiswa: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Mahasiswa %i: ", i + 1);
        scanf("%i", &nilai[i]);
    }

    printf("Nilai mahasiswa yang telah diinput %i \n", i);
    // for (i = 0; i < 10; i++)
    // {
    //     printf("%5.0i \n", nilai[i]);
    // }
    return 0;
}
