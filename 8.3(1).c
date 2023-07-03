#include <stdio.h>

int main() {
    int rows, columns, i, j;
    float sum = 0.0, average;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    
    printf("Enter the array's column size: ");
    scanf("%d", &columns);
    
    int array[rows][columns];
    
    printf("Enter array's elements:\n");
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }
    
    average = sum / (rows * columns);
    
    printf("\nAverage of the Array: %.2f\n", average);
    
    return 0;
}

