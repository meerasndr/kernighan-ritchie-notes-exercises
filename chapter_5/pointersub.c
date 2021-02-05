#include <stdio.h>

//finding the length of array or string

int main(void){
    int arr[]= {11, 22, 33, 44, 55};
    char *str = "Hello, world";
    int *ptr;
    ptr = arr;
    char *strptr;
    strptr = str;
    /*while(*ptr != '\0'){
        ptr++;
    }*/

    while(*strptr != '\0'){
        strptr++;
    }
    printf("The length of string is %ld", strptr - str);

}