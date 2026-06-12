// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num, soma = 0;

    do {
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &num);
        soma += num;
    } while (num != 0);

    printf("Soma total = %d\n", soma);

    return 0;
}
