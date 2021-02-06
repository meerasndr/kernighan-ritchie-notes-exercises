/* p2.c
Find out (add code to print out) the address of the variable x in foo1, and the
variable y in foo2. What do you notice? Can you explain this?
*/
#include <stdio.h>
void foo1(int xval)
{
    int x;
    x = xval;
 /* print the address and value of x here */
    printf("The address of x is 0x%x\n", &x);
    printf("The value of x is %d\n", x);
    
}
void foo2(int dummy)
{
    int y;
    /* print the address and value of y here */
    printf("The address of y is 0x%x\n", &y);
    printf("The value of y is %d\n", y);   
}
int main()
{
 foo1(7);
 foo2(11);
 return 0;
}



/* printf("The address of y is 0x%x\n", &y);
    printf("The value of y is %d\n", y);
    printf("The address of z is 0x%x\n", &z);
    printf("The value of z is %d\n", z);
    */