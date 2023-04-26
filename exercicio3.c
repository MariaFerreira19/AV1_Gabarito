#include <stdio.h>

int main() {
    int notas_583[10];
    int i, soma_583 = 0;
    float media_583;
    int nmaior_583, nmenor_583;
    
    for(i = 0; i < 10; i++) {
        printf("Informe a nota do %dº aluno: ", i+1);
        scanf("%d", &notas_583[i]);
        while(notas_583[i] < 1 || notas_583[i] > 10) {
            printf("Nota inválida. Informe novamente: ");
            scanf("%d", &notas_583[i]);
        }
        soma_583 += notas_583[i];
    }
    
    media_583 = soma_583 / 10.0;
    nmaior_583 = notas_583[0];
    nmenor_583 = notas_583[0];
    
    for(i = 1; i < 10; i++) {
        if(notas_583[i] > nmaior_583) {
            nmaior_583 = notas_583[i];
        }
        if(notas_583[i] < nmenor_583) {
            nmenor_583 = notas_583[i];
        }
    }
    
    printf("Soma das notas: %d\n", soma_583);
    printf("Média das notas: %.1f\n", media_583);
    printf("Maior nota: %d\n", nmaior_583);
    printf("Menor nota: %d\n", nmenor_583);
    
    return 0;
}
