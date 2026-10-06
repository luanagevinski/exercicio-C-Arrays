#include<stdio.h>
int main(){
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: \n");
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
           printf("%d é par\n", vetor[i]);
        }
        
    }
    
    
}