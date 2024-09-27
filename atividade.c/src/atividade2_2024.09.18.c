// atividade 2 quarta 2024.18.09 - PG 54 (PG de busca 83)

#include <stdio.h>

int main(void){
    int contador;
    int nota;
    int total;

    float media;

    total = 0;
    contador = 0;

    printf("Digite a nota, -1 no fim:\n");
    scanf("%d", &nota);

    while(nota != -1){
    total = total + nota;
    contador = contador + 1;
    printf("Digite a nota, -1 para finalizar:\n");
    scanf("%d", &nota);
    }
 
    if(contador != 0){
    media = (float) total / contador;
    printf("Média da turma é %.2f\n", media);
    }

    else{
    printf("Nenhuma nota foi informada\n");
    }

    return 0;
}