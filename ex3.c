#include <stdio.h>

int main() {
    float numero[10];
    float quadrado[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero real: ");
        scanf("%f", &numero[i]);

        quadrado[i] = numero[i] * numero[i];
    }

    printf("\nNumeros digitados:\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", numero[i]);
    }

    printf("\nQuadrados:\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", quadrado[i]);
    }

    return 0;
}