// Atividade 1 quinta 2024.19.09 "Crie um programa C que receba dois números e realize as quatro operações matemáticas"

#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite aqui o primeiro numero para calculo das quatro operacoes matematicas\n");
    scanf("%d",&n1);
    printf("Digite aqui o segundo numero para calculo das quatro operacoes matematicas\n");
    scanf("%d",&n2);

    int soma = n1 + n2;
    int subtracao = n1 - n2;
    int divisao = n1 / n2;
    int multiplicacao = n1 * n2;

    printf("O resultado da soma foi %d\n", soma);
    printf("O resultado da subtracao foi %d\n", subtracao);
    printf("O resultado da divisao foi %d\n", divisao);
    printf("O resultado da multiplicacao foi %d\n", multiplicacao);

    return 0;
}