// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("Numero aceito.\n");

    return 0;
}
