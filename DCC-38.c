// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int senha;

    while (senha != 1234) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");

    return 0;
}
