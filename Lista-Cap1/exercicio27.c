#include <stdio.h>

int main()
{
    int segundos, horas, minutos, resto;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    resto = resto % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n", horas, minutos, resto);

    return 0;
}