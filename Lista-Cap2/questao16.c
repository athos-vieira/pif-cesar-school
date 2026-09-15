#include <stdio.h>
#include <math.h>

int main() {
    float alturaDegrau, alturaTotal;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura total desejada (em metros): ");
    scanf("%f", &alturaTotal);

    // Converte a altura total de metros para centimetros.
    alturaTotal = alturaTotal * 100;

    // Calcula o numero minimo de degraus, arredondando para cima.
    quantidadeDegraus = (int)ceil(alturaTotal / alturaDegrau);

    printf("Numero minimo de degraus: %d\n", quantidadeDegraus);

    return 0;
}