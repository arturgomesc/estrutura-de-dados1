#include <stdio.h>

void printMatrix(float matrix[4][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Declaração e inicialização das matrizes
    float mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    float mat1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    float mat2[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // Imprimindo as matrizes
    printf("Matriz mat:\n");
    printMatrix(mat, 4, 3);

    printf("Matriz mat1:\n");
    printMatrix(mat1, 4, 3);

    printf("Matriz mat2:\n");
    printMatrix(mat2, 4, 3);

    return 0;
}
