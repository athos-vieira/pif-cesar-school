#include <stdio.h>

int main() {
    int horasNormais, horasExtras;
    float salarioBruto, imposto, salarioLiquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%d", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%d", &horasExtras);


    salarioBruto = (horasNormais * 10.00) + (horasExtras * 15.00);


    imposto = salarioBruto > 12000.00
              ? (salarioBruto - 12000.00) * 0.10
              : 0.00;


    salarioLiquido = salarioBruto - imposto;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}