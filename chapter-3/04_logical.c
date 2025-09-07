#include <stdio.h>

int main(){
    int a =1; ; int b =1; // or either we can add 0 0 0r 0 1
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);  // NOT operator

    // TO CHECK CONDITION 
    if(a && b){
        printf("both are true\n");
    }    
    // is ame as writing
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}