// Write the function strend(f,s) which return 1 if the string s occurs at the end of 
//the string f, and zero otherwise

#include <stdio.h>

int strend(char *f, char *s){
    int length = 0;
    while(*f){
        f++;
    }

    while(*s){
        length++;
        s++;
    }
    while(length != 0){
        if(*f == *s){
            f--;
            s--;
            length--;
        }
        else{
            return 0;
        }
    }

    return 1;
}

int main(void){
    char* f = "papercraft";
    char *s = "craft";
    printf("%d\n",strend(f, s));
}