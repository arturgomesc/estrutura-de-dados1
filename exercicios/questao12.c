#include <stdio.h>

int negativos(int n, float *vet);

int main() {
    float vet[] = {1.5, -2.3, 4.0, -1.1, -3.3, 5.5};
    int n = sizeof(vet) / sizeof(vet[0]);  

    int quantidade_negativos = negativos(n, vet);

    printf("Quantidade de números negativos no vetor: %d\n", quantidade_negativos);

    return 0;
}

int negativos(int n, float *vet) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            count++;
        }
    }
    return count;
}
