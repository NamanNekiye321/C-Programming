#include <stdio.h>
// Write a program to check whether a number is divisible by 97 or not.
int main() {
    
    // way to solve with if else conditionals--

    // int a ;

    // printf("Pls Enter a number to check whether it is divible by 97 or not:\n");

    // scanf("%d",&a);

    // if (a%97 == 0)
    // {
    //     printf("The given number is divisible by 97\n");
    // }
    // else
    // {
    //     printf("The given number is not divisible by 97\n");
    // }

    // way to solve without if else conditionals

    int num;

    printf("Enter a number to check whether its divisible by 97 or no:");

    scanf("%d",&num);

    printf("Divisibility test returns: %d\n",num%97);
    
    return 0;
}