#include <stdio.h>

#define ROWS 4
#define COLS 3

void imprimeDiagonalSoma(float mat[ROWS][COLS]);

int main() {
    float mat[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    imprimeDiagonalSoma(mat);

    return 0;
}

void imprimeDiagonalSoma(float mat[ROWS][COLS]) {
    float soma = 0;

    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < ROWS; i++) {
        if (i < COLS) {  
            printf("%.2f ", mat[i][i]);
            soma += mat[i][i];
        }
    }

    printf("\n\nSoma dos elementos da diagonal principal: %.2f\n", soma);
}
