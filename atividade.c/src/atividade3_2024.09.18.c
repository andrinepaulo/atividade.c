// atividade 3 quarta 2024.18.09 - PG 54 (PG de busca 83)

#include <stdio.h>

int main(void){
    int aprovados = 0;
    int reprovados = 0;
    int aluno = 1;
    int resultado;

    while(aluno <= 10){
        printf("Forneça resultado (1 = aprovado, 2 = reprovado): ");
        scanf("%d", &resultado);

        if(resultado == 1){
            aprovados = aprovados + 1;
        }

        else{reprovados = reprovados + 1;
        }

        aluno = aluno + 1;
    }

        printf("aprovados %d\n", aprovados);
        printf("aeprovados %d\n", reprovados);

        if(aprovados > 8){
            printf("Bônus ao instrutor!\n");
        }

    return 0;
}