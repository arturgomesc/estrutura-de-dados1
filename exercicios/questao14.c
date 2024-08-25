#include <stdio.h>
#include <math.h>

double avalia(double *poli, int grau, double x);

int main() {
    // Exemplo de uso da função avalia
    double coef[] = {12, 2, 3};
    int grau = 2;
    double x = 2.0; 

    double resultado = avalia(coef, grau, x);

    printf("Resultado da avaliação do polinômio: %.2f\n", resultado);

    return 0;
}

double avalia(double *poli, int grau, double x) {
    double resultado = 0.0;
    for (int i = 0; i <= grau; i++) {
        resultado += poli[i] * pow(x, i);
    }
    return resultado;
}
