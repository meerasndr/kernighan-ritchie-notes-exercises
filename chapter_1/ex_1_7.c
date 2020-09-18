#include <stdio.h>
int main(){
    int c;
    if((getchar() != EOF) == 1){
        printf("Value is 1\n");
    }
    else if((getchar() != EOF) == 0){
        printf("Value is 0\n");
    }
    else{
        printf("false\n");
    }
    return 0;
}