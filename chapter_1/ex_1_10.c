/* Write a program to copy its input to its output, 
replacing each tab by \t , each backspace by \b , and each backslash by \\ . 
This makes tabs and backspaces visible in an unambiguous way. */

#include <stdio.h>
int main(){
    int c;
    while((c = getchar()) != EOF){
        if((c == '\t') || (c == '\b') || (c == '\\')){
            putchar('\\');
            if(c == '\b'){
                putchar('b');
            }
            if(c == '\\'){
                putchar('\\');
            }
            if(c == '\t'){
                putchar('t');
            }
        }
        else {
            putchar(c);
        }
    }
    return 0;
}
