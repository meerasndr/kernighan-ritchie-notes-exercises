#include<stdio.h>

int increment(int); // function prototype. notifying the compiler in advance that you will be using a function of this sort

int main(void){
    int i = 10;
    int j = increment(i);
    printf("The incremented value is %d\n", j);
    return 0;
}

int increment(int a){
    a++;
    return a;
}