// atividade 4 quarta 2024.18.09 - PG 54 (PG de busca 83)

#include <stdio.h>

int main(void){
    int soma = 0;
    int numero;

    for (numero = 2; numero <= 100; numero +=2){
        soma += numero;
    }

    printf("Soma é %d\n", soma);
    return 0;
}