#include <stdio.h>

int main()
{
    int a583, b583, c583;
    int *p1_583 , *p2_583, *p3_583;
    
    
    p1_583 = &a583;
    p2_583 = &b583;
    p3_583 = &c583;
    
    printf("Digite um número inteiro:\n");
    scanf("%d",p1_583);
    
    printf("Digite outro número inteiro:\n");
    scanf("%d",p2_583);
    
    printf("Digite mais um número inteiro:\n");
    scanf("%d",p3_583);
  
  
    if (*p1_583 > *p2_583) {
        int num =*p1_583;
        *p1_583 = *p2_583;
        *p2_583 = num;
    }

    if (*p2_583 > *p3_583) {
        int num = *p2_583;
        *p2_583 = *p3_583;
        *p3_583 = num;
    }

    if (*p1_583 >*p2_583) {
        int num = *p1_583;
        *p1_583 = *p2_583;
        *p2_583 = num;
    }

    
     printf("Os números em ordem crescente são: %d-%d-%d\n",*p1_583, *p2_583, *p3_583 );
     printf("Os endereços de memória dos números são: %p - %p - %p\n", p1_583, p2_583, p3_583);

    return 0;
}
