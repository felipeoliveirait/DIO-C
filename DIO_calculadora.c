#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Exibir instruções ao usuário
    printf("Digite uma operacao (+, -, *, /): ");
    scanf(" %c", &operador);

    // Solicitar os dois números
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    // Realizar a operação com base no operador fornecido
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Operacao invalida.\n");
            break;
    }

    return 0;
}
