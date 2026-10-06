#include <stdio.h>

int main() {
    int numero[5];
    int maior;
    int menor;
    float soma = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);

        soma += numero[i];
    }

    maior = numero[0];
    menor = numero[0];

    for (int i = 1; i < 5; i++) {

        if (numero[i] > maior) {
            maior = numero[i];
        }

        if (numero[i] < menor) {
            menor = numero[i];
        }
    }

    media = soma / 5;

    printf("\nValores digitados:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numero[i]);
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}