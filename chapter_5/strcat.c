// Pointer version of strcat to concatenate two strings

#include <stdio.h>
#include<stdlib.h>
void myconcat(char *f, char *s){
    while(*f){
        ++f;
    }
   while(*s != '\0'){
        *f = *s;
        f++;
        s++;
    }
}

int main(void){
    char first[1000] = "paper";
    char second[1000] = "craft";

    /* This results in a bus error when myconcat is called:
    char *first = "paper";
    char *second = "craft";
    Possibly due to unavailability / unallocated additional memory. Or memory overlap weirdness.
    */

    myconcat(first, second);
    printf("%s\n", first);
}