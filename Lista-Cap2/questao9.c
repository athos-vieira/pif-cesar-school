#include <stdio.h>

int main() {
    int numero1, numero2;
    float divisao;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Multiplicacao: %d\n", numero1 * numero2);

    // O cast para float evita a divisao inteira e preserva as casas decimais.
    divisao = (float) numero1 / numero2;

    printf("Divisao: %.2f\n", divisao);

    /*
     * Para evitar matematicamente a divisao por zero,
     * basta garantir que o divisor seja diferente de zero:
     * numero2 != 0.
     */

    return 0;
}