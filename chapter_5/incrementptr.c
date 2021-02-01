#include <stdio.h>

void increment(int *x){
    *x = *x + 1;
}

int main(void){
    int i = 1;
    int *j = &i;
    printf("the value of i is %d and its address is %p\n", *j, j);
    increment(j);
    printf("The new value of i is %d and its address is %p\n", *j, j);
    return 0;
}