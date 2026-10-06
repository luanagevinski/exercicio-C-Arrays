#include <stdio.h>

int main() {
    int numero[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    int maior = numero[0];
    int menor = numero[0];

    int posicaoMaior = 0;
    int posicaoMenor = 0;

    for (int i = 1; i < 5; i++) {

        if (numero[i] > maior) {
            maior = numero[i];
            posicaoMaior = i;
        }

        if (numero[i] < menor) {
            menor = numero[i];
            posicaoMenor = i;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao do maior: %d\n", posicaoMaior);

    printf("Menor valor: %d\n", menor);
    printf("Posicao do menor: %d\n", posicaoMenor);

    return 0;
}