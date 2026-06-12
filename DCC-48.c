// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("1 - Mensagem\n");
        printf("2 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1)
            printf("Voce escolheu a mensagem!\n");

    } while (opcao != 2);

    return 0;
}
