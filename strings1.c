#include<stdio.h>

int main(void){
    char *mystring = "Hello milky way"; //mystring is a char pointer. It points to the first character 'H'
    printf("I want to say \"%s\"\n", mystring);


    for (int i = 0; i < 15; i++){
        printf("%c", mystring[i]);
    }
    printf("\n");
}

