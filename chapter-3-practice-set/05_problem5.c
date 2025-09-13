#include <stdio.h>

int main(){
    // Write a program to determine whether a character entered by the user is
    // ASCII value --> it is a characters integer value
    // https://www.w3schools.com/charsets/ref_html_ascii.asp?utm_source=chatgpt.com
    char ch = 'd';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97 and 122
    if(ch >= 07 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character not lowercase\n");
    }
    return 0;
}