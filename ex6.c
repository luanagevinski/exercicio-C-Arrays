#include <stdio.h>

int main() {
    int numero[10];
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
    }

    int maior = numero[0];
    int menor = numero[0];

    for (int i = 0; i < 10; i++)
    {
        if (numero[i] > maior)
        {
            maior = numero[i];
        }

        if (numero[i] < menor)
        {
            menor = numero[i];
        }
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}