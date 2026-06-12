// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    char resposta;

    do {
        printf("Executando operacao...\n");
        printf("Deseja sair? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta != 's');

    return 0;
}
