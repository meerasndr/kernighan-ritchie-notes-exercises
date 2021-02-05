//Make your own strcpy clone

#include<stdio.h>
#include<stdlib.h>

void mystrcpy(char* first, char* second){
    while(*first != '\0'){
        *second = *first;
        first++;
        second++;
    }
}
int main(void){
    char *first = "hello";
    char *second = malloc(sizeof(char*));
    mystrcpy(first, second);
    printf("The copied string is %s\n", second);
    free(second);
}