// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num, contador = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        num /= 10;
        contador++;
    }

    printf("Quantidade de digitos = %d\n", contador);

    return 0;
}
