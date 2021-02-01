#include <stdio.h>

int main(){
    int i = 90;
    int *p;
    p = NULL;
    printf("The address/value that the pointer holds is %p\n", p);
    //printf("The pointer references %d\n", *p);
    p = &i;     
    printf("The address/value that the pointer holds is %p\n", p);
    printf("The pointer references %d\n", *p);

    return 0;
}