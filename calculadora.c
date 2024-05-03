#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;

    printf("Escolha qual calculo deseja fazer, com adição sendo 1, subtração sendo 2, divisão sendo 3 e multiplicação sendo 4.\n");
    scanf("%d", &n3);
    printf("Escolha o primeiro número.\n");
    scanf("%d", &n1);
    printf("Escolha o segundo número.\n");
    scanf("%d", &n2);
    
    if (n3 == 1) {
        n1 = n1 + n2;
        printf("A soma dos números é igual a: %d\n", n1);
    }

    if (n3 == 2) {
        n1 = n1 - n2;
        printf("A subtração dos números fornecidos é igual a: %d\n", n1);
    }

    if (n3 == 3) {
        if (n1 == 0) {
            printf("Não é possível dividir por 0 !\n");
        } else {
            n1 = n1 / n2;
            printf("A divisão dos números fornecidos é igual a: %d\n", n1);
        }
    }

    if (n3 == 4) {
        if (n1 == 0) {
            printf("Não é possível multiplicar por 0 !\n");
        } else {
            n1 = n1 * n2;
            printf("A multiplicação dos números fornecidos é igual a: %d\n", n1);
        }
    }

    return 0;
}
