#include<stdio.h>
int main(){
    float nota[15];
    float media;


    for (int i = 0; i < 15; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);

        media += nota[i];

    }

    media /= 15;
    printf("Média das notas: %.2f\n", media);
}