#include <stdio.h>

#define PI 3.141593

int main() {
    float graus, radianos;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("Angulo em radianos: %.2f\n", radianos);

    return 0;
}