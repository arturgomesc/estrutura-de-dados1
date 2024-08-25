#include <stdio.h>
#include <stdlib.h>

float* transposta(int m, int n, float** mat) {
    float* transposta = (float*)malloc(n * m * sizeof(float));
    if (transposta == NULL) {
        printf("Erro de alocação de memória\n");
        exit(1);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposta[j * m + i] = mat[i][j];
        }
    }

    return transposta;
}

int main() {
    int m = 2, n = 3;

    float** matriz = (float**)malloc(m * sizeof(float*));
    for (int i = 0; i < m; i++) {
        matriz[i] = (float*)malloc(n * sizeof(float));
    }

    matriz[0][0] = 1.0;
    matriz[0][1] = 2.0;
    matriz[0][2] = 3.0;
    matriz[1][0] = 4.0;
    matriz[1][1] = 5.0;
    matriz[1][2] = 6.0;

    float* mat_transposta = transposta(m, n, matriz);

    printf("Matriz original:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.1f ", mat_transposta[i * m + j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(mat_transposta);

    return 0;
}
