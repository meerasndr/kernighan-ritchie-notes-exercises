#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    int c, cc, wc, lc, state;// calculate character count, word count and line count in input
    cc = wc = lc = 0;
    state = OUT;
    while((c = getchar()) != EOF ){
        ++cc;
        if(c == '\n'){
            ++lc;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }   
    }
    printf("Character count: %d\nWord count: %d\nLine count: %d\n", cc, wc, lc);
    return 0;
}