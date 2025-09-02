#include <stdio.h>

int main(){
    /* write a program to calculate area of triangle
    a. using hardcoded input
    b. using input supplied by user
    */
    //int length = 3;
    //int breadth = 6;

    int length, breadth;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The ara of this triangle is %d", length
    *breadth);

    return 0;
}