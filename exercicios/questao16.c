#include <stdio.h>

float max_vet(int n, float *vet) {
    if (n <= 0) {
        return 0.0f;
    }

    float max = vet[0]; 

    for (int i = 1; i < n; i++) {
        if (vet[i] > max) {
            max = vet[i]; 
        }
    }

    return max;
}

int main() {
    float vetor[] = {3.4, 5.6, 1.2, 8.9, 7.5};
    int tamanho = 5;

    float maximo = max_vet(tamanho, vetor);
    printf("O maior valor do vetor é: %.2f\n", maximo);

    return 0;
}
