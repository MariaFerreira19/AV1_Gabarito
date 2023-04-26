#include <stdio.h>

int dobrar(int num_583) {
    return num_583 * 2;
}

int somar(int num1_583, int num2_583) {
    return num1_583 + num2_583;
}

int triplicar(int num_583) {
    return num_583 * 3;
}

int main() {
    int num1_583, num2_583, soma_583, resultado_583;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1_583);

    printf("Digite o segundo número: ");
    scanf("%d", &num2_583);

    soma_583 = somar(num1_583, num2_583);
    resultado_583 = triplicar(somar(dobrar(num1_583), dobrar(num2_583)));
    
    printf("A soma dos números digitados é: %d\n", soma_583);
    printf("Resultado em caso de soma e triplicação: %d\n", resultado_583);

    return 0;
}
