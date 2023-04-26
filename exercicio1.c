#include <stdio.h>

int main() {
    float vCompra583, Desconto583, vTotal583;

    printf("Digite o valor da sua compra: ");
    scanf("%f", &vCompra583);

    if (vCompra583 <= 5000) {
        Desconto583 = vCompra583 * 0.12;
    } else if (vCompra583 <= 8000) {
        Desconto583 = vCompra583 * 0.07;
    } else if (vCompra583 <= 10000) {
        Desconto583 = vCompra583 * 0.04;
    } else {
        Desconto583 = vCompra583 * 0.03;
    }

    vTotal583 = vCompra583 - Desconto583;

    printf("O seu desconto é de: R$ %.2f\n", Desconto583);
    printf("O valor total a pagar é: R$ %.2f\n", vTotal583);

    return 0;
}