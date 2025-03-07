#include <stdio.h>
#include <math.h>

int main() {
    
    // int a = 5;
    // int b = 4;

    // printf("The value of a + b is %d\n",a+b);
    // printf("The value of a - b is %d\n",a-b);
    // printf("The value of a * b is %d\n",a*b);
    // printf("The value of a / b is %f\n",a/b);


    int z ;
    int b = 4, c = 5;
    
    //% --> Modular Devision Operator

    /**
     * This code demonstrates the use of the modulus operator (%) in C.
     * 
     * The modulus operator returns the remainder of the division of two integers.
     * 
     * The variable `z` is assigned the result of `c % b`, where the sign of the result
     * will be the same as the numerator (`c`) and does not depend on the sign of the denominator (`b`).
     * 
     * The `printf` statements display:
     * - The value of `z`.
     * - The remainder when `c` is divided by `b`.
     * - The remainder when `-c` is divided by `b`.
     * - The remainder when `c` is divided by `-b`.
     * 
     * Note: The behavior of the modulus operator with negative numbers can vary between different C compilers.
     */
    z = c % b;
    // sign will be same as numerator and does not depend on sign of denominator
    printf("The value of z is %d\n",z);
    printf("5 when divided by 4 gives remainder of  %d\n",c%b);
    printf("-5 when divided by 4 gives remainder of  %d\n",-c%b);
    printf("5 when divided by -4 gives remainder of  %d\n",c%b);


    //No operator is assumed to be present

    // printf("The value of 4 * 5 is %d\n",(4)(5)); //will not return 20
    // printf("The value of 4 * 5 is %d\n",(4)*(5));//will return 20
    
    printf("the value of 4^5 is %d\n",4^5);// will perform xor operation
    printf("the value of 4^5 is %d\n",(int)pow(4,5));


    printf("The value of 5/2 is %d\n",5/2);
    printf("The value of 5.0/2 is %f\n", 5.0/2);
    printf("The value of 5.0/2.0 is %f\n",5.0/2.0);



    int k = 3.0/9;
    printf("The value of k is %f\n",3.0/9);



    return 0;
}





















