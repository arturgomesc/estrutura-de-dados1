#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(int n, float *v) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}

float variancia(int n, float *v, float m) {
    float soma_dos_quadrados = 0;
    for (int i = 0; i < n; i++) {
        soma_dos_quadrados += (v[i] - m) * (v[i] - m);
    }
    return soma_dos_quadrados / (n - 1); // Variância amostral
}

int main() {
    srand(time(NULL)); 

    int n = 10; // Ou solicitar ao usuário 
    float *numeros = (float *) malloc(n * sizeof(float));

    if (numeros == NULL) {
        printf("Memoria Insuficiente\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        numeros[i] = (float) (rand() % 100 + 1); 
    }

    float media_calculada = media(n, numeros);
    float variancia_calculada = variancia(n, numeros, media_calculada);

    printf("Números gerados: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    printf("Média: %.2f\n", media_calculada);
    printf("Variância: %.2f\n", variancia_calculada);

    free(numeros); // Libera a memória alocada

    return 0;
}
