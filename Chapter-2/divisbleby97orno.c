#include <stdio.h>
// Write a program to check whether a number is divisible by 97 or not.
int main() {
    
    int a ;

    printf("Pls Enter a number to check whether it is divible by 97 or not:\n");

    scanf("%d",&a);

    if (a%97 == 0)
    {
        printf("The given number is divisible by 97\n");
    }
    else
    {
        printf("The given number is not divisble by 97\n");
    }
    
    



    return 0;
}