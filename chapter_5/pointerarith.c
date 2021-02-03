#include <stdio.h>

int main(void) {
    int a = 10;
    int *ptr = &a;
    printf("The value of the number is %d\n", *ptr);
    printf("The address of the value is %p\n", ptr);
    (*ptr)++;
    printf("The value of the number is %d\n", *ptr);
    printf("The value of the original number is %d\n", a);
    printf("The address of the value is %p\n", ptr);

    int arr[] = {11, 22, 33, 44, 55};
    int *p = &arr[0];
    printf("The first element in the array is %d\n", *p);
    printf("The second element in the array is %d\n", *(p+1));
    printf("The third element in the array is %d\n", *(p+2));
    printf("The fourth element in the array is %d\n", *(p+3));

    //Printing the elements of an array using pointers, and not array index

    for(int i = 0; i < 5; i++){
        printf("%d\n", *(p+i));
        //printf("Current address is %p\n", p+i);
    }

}