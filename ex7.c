#include <stdio.h>

int main() {
    int numero[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    int maior = numero[0];
    int posicaoMaior = 0;

    for (int i = 1; i < 10; i++) {
        if (numero[i] > maior) {
            maior = numero[i];
            posicaoMaior = i;
        }
    }

    printf("\nVetor:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\n", numero[i]);
    }

    printf("Maior elemento: %d\n", maior);
    printf("Posicao do maior: %d\n", posicaoMaior);

    return 0;
}