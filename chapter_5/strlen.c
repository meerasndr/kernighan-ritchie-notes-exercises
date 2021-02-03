#include <stdio.h>

int mystrlen(char *localstring){
    int length;
    for(length = 0; *localstring != '\0'; localstring++){
        //printf("The current character is %c\n", *localstring);
        //printf("The current character's address is %p\n", localstring);
        length++;
    }
    return length;
}

int main(void){
    char *string = "hello world";
    char stringarr[] = "good morning!!";
    printf("The length of the string is %d\n", mystrlen(string));
    printf("The length of the string is %d\n", mystrlen(stringarr));
    printf("The length of the string is %d\n", mystrlen("Want to say hi there"));
}