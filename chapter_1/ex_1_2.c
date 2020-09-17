#include <stdio.h>
int main(){
    printf("hello, ");
    printf("world\c");
    printf("\c");
    printf("\n");
    return 0;
}
//The C compiler generates this warning: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence] printf("world\c");
// Output: hello, worldcc