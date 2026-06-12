// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("Digite a operacao (+,-,*,/): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Resultado = %.2f\n", a + b);
            break;

        case '-':
            printf("Resultado = %.2f\n", a - b);
            break;

        case '*':
            printf("Resultado = %.2f\n", a * b);
            break;

        case '/':
            printf("Resultado = %.2f\n", a / b);
            break;

        default:
            printf("Operacao matematica nao reconhecida\n");
    }

    return 0;
}
