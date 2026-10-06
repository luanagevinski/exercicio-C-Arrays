#include <stdio.h>

int main() {
    float numero[10];
    int quantidadeNegativos = 0;
    float somaPositivos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero real: ");
        scanf("%f", &numero[i]);

        if (numero[i] < 0) {
            quantidadeNegativos++;
        }

        if (numero[i] > 0) {
            somaPositivos += numero[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", quantidadeNegativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}