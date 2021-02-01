#include <stdio.h>

// all these three ways of passing the array as a parameter to function are the same and valid

void times2(int *a, int len){
    for(int j = 0; j < len; j++){
        printf("%d\n", a[j] * 2);
    }
}

void times3(int a[], int len){
    for(int j = 0; j < len; j++){
        printf("%d\n", a[j] * 3);
    }
}

void times4(int a[5], int len){
    for(int j = 0; j < len; j++){
        printf("%d\n", a[j] * 4);
    }
}


int main(void){
    int x[5] = {11, 22, 33, 44 , 55};
    times2(x, 5);
    times3(x, 5);
    times4(x, 5);
}