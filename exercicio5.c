#include <stdio.h>

int maiorIdade583(int a, int b, int c){
    int maior583 = a;
    if (b > maior583){
        maior583 = b;
    }
    if (c > maior583){
        maior583 = c;
    }
    return maior583;
}

int menorIdade583(int a, int b, int c){
    int menor583 = a;
    if (b < menor583){
        menor583 = b;
    }
    if (c < menor583){
        menor583 = c;
    }
    return menor583;
}

int main(){
    int idade1, idade2, idade3;
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);
    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &idade3);
    printf("A maior idade digitada foi: %d\n", maiorIdade583(idade1, idade2, idade3));
    printf("A menor idade digitada foi: %d\n", menorIdade583(idade1, idade2, idade3));
    return 0;
}