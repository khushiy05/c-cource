#include <stdio.h>

int main(){
    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d\n", 3*b/2*c + 7*a); // 1st see precedence and then
    /* 3*b/2*c + 7*a --> 1st we wvaluate  * function according to presendence
    3*b/2*c + 21
    18/2*c + 21
    9*c + 21
    81 + 21
    */
 
    return 0;
}