#include<stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main(){
    int a = 2;
    int b = 3;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}