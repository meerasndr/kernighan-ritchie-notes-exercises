//program to count number of lines in user input
#include <stdio.h>
int main(){
    int lc = 0;
    printf("Enter some lines and finally press Ctrl+D \n");
    while(getchar() != EOF)
        if(getchar() == '\n'){
            ++lc;
        }
    printf("Number of lines: %d \n", lc );
    return 0;
}