#include <stdio.h>
//C Program to check whether you can drive or not
int main() {
    
    int age ;

    printf("Please enter your age : \n");

    scanf("%d",&age);



    if(age >= 90 && age <=100){

        printf("You cannot drive,you are too old for it\n");
    }

    else if(age < 18){
        printf("You cannot drive as you are too young for it\n");
    }
    else if(age >= 18 && age <90){
        printf("Yes you can drive\n");
    }
    else {
        printf("umm\n");

    }


    if(age = 50){
        printf("Half century\n");
    }


    return 0;
}