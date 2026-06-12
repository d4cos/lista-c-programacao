// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    char letra;

    printf("Digite a direcao: ");
    scanf(" %c", &letra);

    switch(letra) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;

        case 'S':
            printf("Seguir para o Sul.\n");
            break;

        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;

        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}
