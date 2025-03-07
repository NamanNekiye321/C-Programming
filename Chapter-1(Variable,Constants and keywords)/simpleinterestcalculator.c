#include <stdio.h>

int main()
{

    int principal = 10;
    int no_of_years = 2;
    float rate_of_interest = 2.5;

    printf("The Simple Interest for given set of values will be %f\n", (principal * no_of_years * rate_of_interest)/100.0) ;
    
    return 0;
}