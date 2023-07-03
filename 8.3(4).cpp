#include <stdio.h>

int main() {
    int size = 5; 
    int array[size][size];
    int i, j, sum = 0;
    
    printf("Enter array's elements:\n");
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("\n");
    
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("%d ", array[i][j]);
                sum += array[i][j];
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    
    printf("\nThe sum of boundary elements of the Array: %d\n", sum);
    
    return 0;
}

