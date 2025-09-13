#include <stdio.h>

int main(){
    // Write a program to find greatest of four numbers entered by the user.
    int a = 4, b = 2, c = 6, d = 32;

    if(a > b && a > c && a > d){
        printf("The greatest of all is %d", a);
    }
    else if(b > a && b > c && b > d){
        printf("The greatest of all is %d", b);
    }
    else if(c > a && c > b && c > d){
        printf("The greatest of all is %d", c);
    }
    else{
        printf("The greatest of all is %d", d);
    }

    return 0;
}
