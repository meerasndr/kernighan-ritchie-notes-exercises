// Program to count blanks, tabs and newlines from a given user input

#include <stdio.h>
int main(){
    int bc;
    int tc;
    int nc;
    int c;
    bc = tc = nc = 0;
    while( (c = getchar()) != EOF){
        if (c == ' '){
            ++bc;
        }
        if (c == '\t'){
            ++tc;
        }
        if(c == '\n'){
            ++nc;
        }
        continue;
    }
    
    printf("Number of blanks: %d\n", bc);
    printf("Number of tabs: %d\n", tc);
    printf("Number of newlines: %d\n", nc);
    return 0;
}