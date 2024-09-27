// atividade 1 quarta 2024.18.09 - PG 54 (PG de busca 83)

#include <stdio.h>

int main(void){
    int contador;
    int nota;
    int total;
    int media;
    
    total = 0;
    contador = 1;

    while(contador <= 10){
        printf("Digite a nota:\n");
        scanf("%d", &nota);
        total = total + nota;
        contador = contador + 1;
    }
    media = total / 10;

    printf("Média da turma é %d\n", media);
    return 0;
}