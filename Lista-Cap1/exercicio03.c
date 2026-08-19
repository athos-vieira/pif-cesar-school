/* esse programa calcula a soma de dois números
 * e demonstra o uso de comentários 
 ***************************************************************/
/* exercicio03.c */

#include <stdio.h> /* biblioteca para entrada e saída de dados */

int main() { //Função principal do programa 

    int num1, num2, soma; // declaração das variáveis

    // solicita ao usuário o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    // solicita ao usuário o segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2; // calcula a soma dos dois números

    printf("A soma dos numeros é: %d\n", soma); // mostra o resultado

    return 0; /* encerra o programa */

} /* fim do corpo da função main */