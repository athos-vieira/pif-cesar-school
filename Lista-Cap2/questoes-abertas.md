# Questão 01 

### a)

O valor exibido no console será:

```text
O valor armazenado eh: 2
```

### b)

Isso acontece porque a variável valor_inteiro foi declarada como int, mas recebeu o valor 2.97, que é do tipo float.

Na atribuição, C faz uma conversão implícita de tipos. Como o destino é um inteiro, a parte decimal é descartada, e o valor armazenado passa a ser 2.

Esse fenômeno é chamado de truncamento.

### c)

Esse comportamento pode ser controlado de duas formas:

- Manter a precisão: declarar a variável como float ou double.
- Arredondar o valor: usar funções da biblioteca <math.h>, como round(), floor() ou ceil(), e converter o resultado para int quando necessário.

Exemplo:

```c
#include <math.h>

int valor = round(2.97); // resultado: 3
```

Assim, o programador escolhe se deseja manter as casas decimais ou arredondar o valor antes da conversão para inteiro.
```