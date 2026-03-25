#include <stdio.h>
#include <stdbool.h>

// Function to check Toeplitz matrix
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] != matrix[i-1][j-1]) {
                return false;
            }
        }
    }
    return true;
}

// Main function to test
int main() {
    int rows = 3, cols = 4;

    // Allocate matrix
    int** matrix = (int**)malloc(sizeof(int*) * rows);
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(sizeof(int) * cols);
    }

    // Example input
    int values[3][4] = {
        {1,2,3,4},
        {5,1,2,3},
        {9,5,1,2}
    };

    // Copy values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = values[i][j];
        }
    }

    int matrixColSize[3] = {cols, cols, cols};

    if (isToeplitzMatrix(matrix, rows, matrixColSize)) {
        printf("True (Toeplitz Matrix)\n");
    } else {
        printf("False (Not Toeplitz Matrix)\n");
    }

    return 0;
}
