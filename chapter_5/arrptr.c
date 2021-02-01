#include <stdio.h>

int main(void){
    int arr[5] = {11, 22, 33, 44, 55};
    int *p;
    p = arr;
    printf("The address is %p and the value is %d\n", p, *p);
}