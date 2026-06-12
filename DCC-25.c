// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

// nao informou a média, então usei essas aq!
// Média ≥ 7 → Aprovado
// Média entre 5 e 6,9 → Recuperação
// Média < 5 → Reprovado

int main() {
    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7)
        printf("Aprovado\n");
    else if (media >= 5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}
