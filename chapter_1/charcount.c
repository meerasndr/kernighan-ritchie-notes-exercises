//Program to count the number of characters provided as input
#include <stdio.h>

int main(){
    int num_of_chars = 0;
    printf("Key in some characters : \n");
    while(getchar() != EOF)
        ++num_of_chars;
    
    printf("Number of chars is %d \n", num_of_chars - 1 ); 
    // num_of_chars - 1 because getchar() counts the newline as a character. 
    //Without a newline, the program does not terminate even if Ctrl+D is used.
    return 0;
}