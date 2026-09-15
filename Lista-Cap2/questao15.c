#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float mediaSimples, mediaPonderada;

    printf("Digite a nota da prova 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da prova 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota da prova 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota da prova 4: ");
    scanf("%f", &nota4);

    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    mediaPonderada = (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / 6.0;

    printf("Media aritmetica simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}