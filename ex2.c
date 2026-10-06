#include<stdio.h>
int main(){
    int numero[6];

    for (int i = 0; i < 6; i++){
        printf("Digite um número: \n");
        scanf("%d", &numero[i]);
    }
    printf("Números digitados: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", numero[i]);
    }
    return 0;
}