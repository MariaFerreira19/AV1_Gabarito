#include <stdio.h>

int main() {
    int num583, i;
    
    printf("Digite um número positivo: ");
    scanf("%d", &num583);
    
    if (num583 < 1) {
        printf("Número inválido. Por favor, digite um número inteiro positivo (maior que 1).\n");
        return 0;
    }
    
    printf("Os números impares entre 1 e o número digitado (%d) são:\n", num583);
    
    i = 1;
    while (i <= num583) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    
    return 0;
}