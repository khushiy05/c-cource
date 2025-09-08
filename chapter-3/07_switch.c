#include <stdio.h>

int main(){
    int a;
    printf("Enter a:");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("You entered 1\n");
            break; // to break the statement and match the condition or break statement se bahar nikal do
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing matched\n");
            break;
    }
    return 0;
}