#include <stdio.h>

int main()
{

    int grade;

    printf("Please Enter your marks and get your grade\n");
    scanf("%d", &grade);

    switch (grade / 10)
    {
    case 10:
        printf("your grade is A\n");
        break;

    case 9:
        printf("your grade is A\n");
        break;
    case 8:
        printf("your grade is B\n");
        break;
    case 7:
        printf("your grade is C\n");
        break;
    case 6:
        printf("your grade is D\n");
        break;
    case 5:
        printf("your grade is F\n");
        break;
    }

    return 0;
}