#include <stdio.h>

int main(){
    int age = 15;
    if(age>10){
        printf("We are inside if\n");
        printf("Your age is grater than 10\n");
    }
    if(age%5==0){ 
        printf("We are inside another if\n");
        printf("Your age is grater than 50\n");
    }
    return 0;
}