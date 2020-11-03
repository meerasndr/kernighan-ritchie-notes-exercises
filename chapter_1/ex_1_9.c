//Write a program to copy its input to its output, 
//replacing each string of one or more blanks by a single blank.

#include <stdio.h>
int main(){
    int c;
    int count = 0;
    while( (c = getchar()) != EOF){
        if((c == ' ') && (count == 0)){
            ++count;
            putchar(c);
        }
        if(c != ' '){
            count = 0;
            putchar(c);
        }
    }
    return 0;
}