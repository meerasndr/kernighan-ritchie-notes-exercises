//count the number of characters from user input, using a for loop
#include <stdio.h>
int main(){
    long nc;
    printf("Enter some characters: \n");
    for(nc = 0; getchar() != EOF; ++nc )
        ;
    printf("Number of characters %ld \n", nc - 1);
    // nc - 1 because getchar() counts the new line as a character too
    // Terminating with Ctrl+D at the end of the character/string doesn't work. Hence a new line is required.
    return 0;
}