#include <stdio.h>

int main() {
    
    int tempincelsius = 34;
    float tempinfahrenheit = (tempincelsius*(9.0/5.0))+32;
    //remember to not do integer division and instead do floating point division

    printf("The given temperature in fahrenheit will be %f\n", tempinfahrenheit);

    return 0;
}