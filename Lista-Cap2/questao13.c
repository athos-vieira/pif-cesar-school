#include <stdio.h>

int main() {
    float lado, base, altura;
    float areaQuadrado, areaRetangulo, areaTriangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    areaQuadrado = lado * lado;
    areaRetangulo = base * altura;
    areaTriangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo retangulo: %.2f\n", areaTriangulo);

    return 0;
}