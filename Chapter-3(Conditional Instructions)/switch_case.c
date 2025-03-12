#include <stdio.h>

int main() {

    int rating;
    
    printf("Please Enter your rating:\n");
    scanf("%d",&rating);

    switch (rating)
    {
    case 1:
        printf("Thank for 1 Rating\n");
        break;
    case 2:
        printf("Thank for 2 Rating\n");
        break;
    case 3:
        printf("Thank for 3 Rating\n");
        break;
    case 4:
        printf("Thank for 4 Rating\n");
        break;
    case 5:
        printf("Thank for 5 Rating\n");
        break;
    
    default:
        printf("Invalid");
        break;
    }
    






    return 0;
}