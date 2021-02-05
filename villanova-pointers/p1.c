/* p1.c
    Write a short C program that declares and initializes (to any value you like) a
    double, an int, and a char. Next declare and initialize a pointer to each of
    the three variables. Your program should then print the address of, and value
    stored in, and the memory size (in bytes) of each of the six variables.
    Use the “0x%x” formatting specifier to print addresses in hexadecimal. You
    should see addresses that look something like this: "0xbfe55918". The initial
    characters "0x" tell you that hexadecimal notation is being used; the remainder
    of the digits give the address itself.
    Use “%f” to print a floating value. Use the sizeof operator to determine the
    memory size allocated for each variable.
    Sample output:
    The address of char ___ is 0x_______
    The address of int ___ is 0x_______
    The address of double ___ is 0x_______
    The address of char* ___ is 0x_______
    The address of int* ___ is 0x_______
    The address of double* ___ is 0x_______
    The value of char ___ is _______
    The value of int ___ is _______
    The value of double ___ is _______
    The value of char* ___ is 0x_______
    The value of int* ___ is 0x_______
    The value of double* ___ is 0x_______
    The size of char is _______ bytes
    The size of int is _______ bytes
    The size of double is _______ bytes
    The size of char* is _______ bytes
    The size of int* is _______ bytes
    The size of double* is _______ bytes
*/

#include<stdio.h>
int main(void){
    int i = 123;
    double d = 3.14156;
    char c = 'm';
    int *iptr = &i;
    double *dptr = &d;
    char *cptr = &c;
    printf("The address of char c is 0x%x\n", &c);
    printf("The address of integer i is 0x%x\n", &i);
    printf("The address of double d is 0x%x\n", &d);
    printf("The address of char* cptr is 0x%x\n", &cptr);
    printf("The address of integer* iptr is 0x%x\n", &iptr);
    printf("The address of double* iptr is 0x%x\n", &dptr);
    printf("The value of char c is %c\n", c);
    printf("The value of int i is %d\n", i );
    printf("The value of double d is %f\n", d);
    printf("The value of char pointer cptr is %p\n", cptr);
    printf("The value of int pointer iptr is %p\n", iptr);
    printf("The value of double pointer dptr is %p\n", dptr);
    printf("The size of char is %lu bytes\n", sizeof(char));
    printf("The size of int is %lu bytes\n", sizeof(int));
    printf("The size of double is %lu bytes\n", sizeof(double));
    printf("The sizeof char pointer is %lu bytes\n", sizeof(char*));
    printf("The size of int pointer is %lu bytes\n", sizeof(int*));
    printf("The size of double pointer is %lu bytes\n", sizeof(double*));
}