#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_nums[20];
    int soma = 0;

    
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {

        random_nums[i] = rand() % 101;
    }

    for (int i = 0; i < 20; i++) {
        soma += random_nums[i];
    }

    printf("Média dos números aleatórios: %.2f\n", (float)soma / 20);

    return 0;
}