#include <stdio.h>

int main(){
    int a = 42;
    int* p;
    printf("%lu\n", sizeof(int));
    printf("value of a is %d and its address is %p\n", a, &a);
    printf("pointer p's value is %p\n", p);
    p = &a;
    printf("pointer p's new value is %p\n", p);
    *p = 99;
    printf("pointer p's new value is %p\n", p);
    printf("value of i is %d\n", a);
    printf("value of dereference-p is %d\n", *p);
    return 0;
}