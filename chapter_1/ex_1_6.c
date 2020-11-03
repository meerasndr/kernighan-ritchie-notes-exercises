#include <stdio.h>
int main(){
    int c;
    printf("Press on any key and press enter. \n");
    printf("%d \n",getchar() != EOF); // This would output 1. If the user presses Ctrl + D (EOF), the output would be 0.
    return 0;
}