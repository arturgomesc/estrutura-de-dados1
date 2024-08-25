#include <stdio.h>

int matriz_identidade(int *mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i * n + j] != 1) {
                return 0; 
            }
            // Verifica os elementos fora da diagonal principal
            if (i != j && mat[i * n + j] != 0) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int matriz[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int n = 3;
    int resultado = matriz_identidade((int *)matriz, n);

    if (resultado) {
        printf("A matriz é uma matriz identidade.\n");
    } else {
        printf("A matriz não é uma matriz identidade.\n");
    }

    return 0;
}
