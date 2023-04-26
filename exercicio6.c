#include <stdio.h>

void calcularMaiorMenor(float notas583[], int tamanho583, float *maior583, float *menor583) {
    int i;

    *maior583 = notas583[0];
    *menor583 = notas583[0];

    for (i = 1; i < tamanho583; i++) {
        if (notas583[i] > *maior583) {
            *maior583 = notas583[i];
        }
        if (notas583[i] < *menor583) {
            *menor583 = notas583[i];
        }
    }
}

int main() {
    float notas583[4];
    float maior583, menor583;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas583[i]);
    }

    calcularMaiorMenor(notas583, 4, &maior583, &menor583);

    printf("A maior nota é: %.2f\n", maior583);
    printf("E a menor nota é: %.2f\n", menor583);

    return 0;
}