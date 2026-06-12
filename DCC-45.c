// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int opcao = 0;

    while (opcao != 3) {
        printf("\n1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);
    }

    printf("Programa encerrado.\n");

    return 0;
}
