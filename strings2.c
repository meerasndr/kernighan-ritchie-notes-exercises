#include <stdio.h>

int main(void){
    char *stringptr = "Hello World"; //pointer to a constant string. immutable
    char stringarr[] = "World Hello"; // non-constant, mutable copy of the constant string
    //Error, Trying to mutate a constant string: stringptr[0] = 'Z';
    stringarr[0] = 'Z';
    printf("%s\n", stringptr);
    printf("%s\n", stringarr);
}