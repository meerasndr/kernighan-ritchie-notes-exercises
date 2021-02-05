//Pointer array equivalence
// a[b] == *(a + b)

#include <stdio.h>

int main(void){
    int arr[] = {11, 22, 33, 44, 55};
    int *ptr;
    ptr = arr;

    for (int i = 0; i < 5; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++){
        printf("%d\t", ptr[i]);    
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++){
        printf("%d\t", *(arr + i));    
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d\t", *(ptr+i));
    }
    printf("\n");

    for (int i = 0; i < 5; i++){
        printf("%d\t", *(ptr++)) ;
    }
}