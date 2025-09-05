#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = a + b; // + is arithmatic operator
    printf("The value of a is %d and value of b of %d and sum is %d\n", a, b, c);
    // Modulas operator is used to get the remainder
    printf("The reminder when a is divided by b is: %d\n", a%b);
    /// This does not work for expoenetiation in c 
    // int d = a^b;
    return 0;
}