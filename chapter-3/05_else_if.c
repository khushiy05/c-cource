#include <stdio.h>

int main(){
    int age = 65; // if the 1st condition is true then it will ignore other statement , only one block can run
    if(age>60){
        printf("you can drive and you are a senoir citizen");
    }
    else if(age>18){
        printf("You can drive");
    }
    else {
        printf("you cannot drive");
    }
    return 0;
}