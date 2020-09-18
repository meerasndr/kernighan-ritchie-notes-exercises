#include <stdio.h>
int main(){
    int c;
    if((getchar() != EOF) == 1 || (getchar() != EOF) == 0){
        printf("True\n");
    }
    else{
        printf("false\n");
    }
    return 0;
}