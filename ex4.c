#include <stdio.h>

int main() {
    int numero[8];
    int X, Y;

    for (int i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &numero[i]);
    }

    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &X);

    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &Y);

    printf("Soma = %d\n", numero[X] + numero[Y]);

    return 0;
}