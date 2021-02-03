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

// functions can modify arrays passed in from main, since arrays are essentially pointers
void doublearr(int *a, int len){
    for(int j = 0; j < len; j++){
        a[j] *= 2;
    }
}



int main(void){
    int x[5] = {11, 22, 33, 44 , 55};
    times2(x, 5);
    times3(x, 5);
    times4(x, 5);
    doublearr(x, 5);
    printf("The modified array is:\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", x[i]);
    }
}