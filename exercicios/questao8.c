#include <stdio.h>
#include <stdlib.h>

float* prod_vetorial(float* u, float* v) {
    float* p = (float*)malloc(3 * sizeof(float));

    if (p == NULL) {
        fprintf(stderr, "Erro na alocação de memória!\n");
        exit(1); // Encerra o programa com um código de erro
    }

    p[0] = u[1] * v[2] - v[1] * u[2];
    p[1] = u[2] * v[0] - v[2] * u[0];
    p[2] = u[0] * v[1] - v[0] * u[1];

    return p;
}

int main() {
    float u[3] = {1.0, 2.0, 3.0};
    float v[3] = {4.0, 5.0, 6.0};
    float* resultado = prod_vetorial(u, v);

    printf("Produto vetorial: (%f, %f, %f)\n", resultado[0], resultado[1], resultado[2]);

    free(resultado); // Libera a memória alocada dinamicamente

    return 0;
}
