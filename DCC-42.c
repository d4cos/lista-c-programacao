// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num, i = 1, quantidade = 0;

    while (i <= 10) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 != 0)
            quantidade++;

        i++;
    }

    printf("Quantidade de impares = %d\n", quantidade);

    return 0;
}
