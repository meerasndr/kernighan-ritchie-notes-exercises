#include <stdio.h>

int main(void){
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row, col;

    for(row = 0; row < 3; row++){
        for(col = 0; col < 4; col++){
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}