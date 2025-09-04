#include <stdio.h>

int main(){
    /*
    calculate the area of a circle and modify the same program to the calculator the volume of a cylinder given its radius and height.
    area of circle
    A=πr2
    volume of a cylinder
    V=πr2h
    
    */
    int r = 6;
    int height = 10;
    printf("The area of circle with the radius %d is %f\n", r, 3.14*r*r);
    printf("The volume of a cylinder with the radius %d and height %d is %f", r, 3.14*r*r*height);
    return 0;
}