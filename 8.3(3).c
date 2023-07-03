#include <stdio.h>

int main() {
    int size, i, j, sum = 0;
    
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);
    
    int array[size][size];
    
    printf("\nEnter array's elements:\n");
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
   
    for (i = 0; i < size; i++) {
        sum += array[i][i];
    }
    
    printf("\nThe sum of diagonal elements of the Array: %d\n", sum);
    
    return 0;
}

