#include <stdio.h>

int main(void){
    float farr[5];
    int a[5] = {5, 4, 3, 2, 1};
    farr[0] = 1.2;
    farr[1] = 2.34;
    farr[2] = 3.45;
    farr[3] = 4.56;
    farr[4] = 5.67;
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", farr[i]);
    }

    for(int j = 0; j < 5; j++){
        printf("%d\n", a[j]);
    }
}