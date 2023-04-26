#include <stdio.h>

int main() {
    int numeros_583[12], pares_583[12], impares_583[12];
    int i, j = 0, k = 0;

    for (i = 0; i < 12; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros_583[i]);
    }


    for (i = 0; i < 12; i++) {
        if (numeros_583[i] % 2 == 0) { 
            pares_583[j] = numeros_583[i];
            j++;
        } else { 
            impares_583[k] = numeros_583[i];
            k++;
        }
    }

    printf("Os números pares são: ");
    for (i = 0; i < j; i++) {
        printf("%d ", pares_583[i]);
    }
    printf("\n");

    printf("E os números ímpares são: ");
    for (i = 0; i < k; i++) {
        printf("%d ", impares_583[i]);
    }
    printf("\n");

    return 0;
}
