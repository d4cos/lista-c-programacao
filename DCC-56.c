// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int opcao;

    printf("Digite o numero do combo: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n");
            break;

        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;

        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;

        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
