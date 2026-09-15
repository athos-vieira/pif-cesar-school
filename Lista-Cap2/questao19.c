#include <stdio.h>

int main() {
    int dias;
    float bruto, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.00;
    imposto = bruto * 0.08;
    liquido = bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}