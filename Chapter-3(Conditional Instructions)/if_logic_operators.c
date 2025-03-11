#include <stdio.h>

int main() {
    
    int age ;
    int vipPass;
    vipPass = 1;

    printf("Please enter your age:\n");

    scanf("%d",&age);

    if((age >= 18 && age <= 60)|| !(vipPass == 1)){

        printf("Yes, You can still do job\n");
    }
    else{
        printf("No,you cant do job\n");
    }

    

    




    return 0;
}