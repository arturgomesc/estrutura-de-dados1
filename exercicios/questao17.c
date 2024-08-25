#include <stdio.h>

int busca(int n, int *vet, int x) {
    for (int i = 0; i < n; i++) {
        if (vet[i] == x) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int vetor[] = {1, 4, 6, 8, 10};
    int tamanho = 5;
    int valor_procurado = 6;

    int encontrado = busca(tamanho, vetor, valor_procurado);
    if (encontrado) {
        printf("Valor %d encontrado no vetor.\n", valor_procurado);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valor_procurado);
    }

    return 0;
}
