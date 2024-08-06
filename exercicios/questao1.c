#include <stdio.h>

// 1) Fazer um programa em C para calcular a soma dos 100 primeiros números inteiros usar vetores.
int main () {
    int numeros[100];
    int soma = 0;

    for (int i = 0; i < 100; i++) {
        numeros[i] = i + 1;
    }

    for (int i = 0; i < 100; i++) {
        soma += numeros[i];
    }

    printf("Soma dos 100 primeiros números inteiros: %d\n", soma);

    return 0;
}