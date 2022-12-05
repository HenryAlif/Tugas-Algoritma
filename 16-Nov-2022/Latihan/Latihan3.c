#include <stdio.h>

int main()
{
    float activity, assignment, exam, activityPure, assignmentPure, examPure, finalScore;
    char name[50], nim[50];

    printf("------------------------------------------------------------------\n");
    printf("\t    TEKNIK ELEKTRO UM   \n");
    printf("------------------------------------------------------------------\n");

    printf("Name : ");
    gets(name);
    printf("NIM : ");
    gets(nim);
    printf("Activity : ");
    scanf("%f", &activity);
    printf("Assignment : ");
    scanf("%f", &assignment);
    printf("Exam : ");
    scanf("%f", &exam);

    activityPure = activity * 0.2;
    assignmentPure = assignment * 0.3;
    examPure = exam * 0.5;
    finalScore = activityPure + assignmentPure + examPure;

    printf("-------------------------------------------------\n");
    printf("Nilai Murni dari ");
    printf(" %s", &name);
    printf(" %s", &nim);
    printf(" sebagai berikut :\n");

    printf("Active Score = %f\n", activityPure);
    printf("Assignment Score = %f\n", assignmentPure);
    printf("Exam Score = %f\n", examPure);
    printf("Last score  = %f\n", finalScore);

    if (finalScore < 45)
    {
        printf("Anda mendapatkan predikat nilai : E\n");
        printf("Anda tidak lulus, tingkatkan belajar anda\n");
    }
    else if (finalScore <= 55)
    {
        printf("Anda mendapatkan predikat nilai : D\n");
        printf("Anda tidak lulus, tingkatkan belajar anda\n");
    }
    else if (finalScore <= 65)
    {
        printf("Anda mendapatkan predikat nilai : C\n");
        printf("Anda lulus, tingkatkan prestasimu\n");
    }
    else if (finalScore <= 75)
    {
        printf("Anda mendapatkan predikat nilai : B-\n");
        printf("Anda lulus dengan baik, pertahankan prestasimu\n");
    }
    else if (finalScore <= 85)
    {
        printf("Anda mendapatkan predikat nilai : B\n");
        printf("Anda lulus dengan baik, pertahankan prestasimu\n");
    }
    else if (finalScore <= 90)
    {
        printf("Anda mendapatkan predikat nilai : A-\n");
        printf("AAnda lulus, EXCELLENT\n");
    }
    else if (finalScore <= 100)
    {
        printf("Anda mendapatkan predikat nilai : A\n");
        printf("AAnda lulus, EXCELLENT\n");
    }

    return 0;
}