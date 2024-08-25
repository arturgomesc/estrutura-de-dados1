#include <stdio.h>

void imprime(float mat[][3], int rows);

int main() {
    float mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    float mat1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    float mat2[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printf("Matriz mat:\n");
    imprime(mat, 4);

    printf("Matriz mat1:\n");
    imprime(mat1, 4);

    printf("Matriz mat2:\n");
    imprime(mat2, 4);

    return 0;
}

void imprime(float mat[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
