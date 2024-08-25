#include <stdio.h>
#include <stdlib.h>

float* transposta(int m, int n, float* mat) {
    float* transposta = (float*)malloc(n * m * sizeof(float));
    if (transposta == NULL) {
        printf("Erro de alocação de memória\n");
        exit(1);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposta[j * m + i] = mat[i * n + j];
        }
    }

    return transposta;
}

int main() {
    int m = 2, n = 3;
    float matriz[] = {
        1.0, 2.0, 3.0,
        4.0, 5.0, 6.0
    };

    float* mat_transposta = transposta(m, n, matriz);

    printf("Matriz original:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.1f ", matriz[i * n + j]);
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

    free(mat_transposta);

    return 0;
}
