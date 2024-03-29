#include <stdio.h>

int main() {
    
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age >= 18){
        printf("your are loging sucesfully");
    }
    else{
        printf("you are to young to signup");
    }

}