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

# Questão 02 

### a)

O uso de funções da biblioteca conio.h deve ser evitado porque ela não faz parte do padrão ANSI C. Essa biblioteca foi criada para compiladores antigos do DOS e do Windows, e não está disponível na maioria dos compiladores modernos, por isso programas que utilizam conio.h não são portáveis.

### b)

As funções equivalentes e portáveis da biblioteca padrão stdio.h são:

- `getchar()` – lê um caractere da entrada padrão.
- `putchar()` – escreve um caractere na saída padrão.


### c)

Exemplo de código que lê um caractere ignorando a quebra de linha ('\n') que pode permanecer no buffer do teclado:

```c
#include <stdio.h>

int main() {
    char letra;

    scanf(" %c", &letra);

    printf("Caractere digitado: %c\n", letra);

    return 0;
}

```

# Questão 04 — Resposta

Valores iniciais:

```c
a = 1, b = 2, c = 3, d = 4;
1. a += b + c;
a = 1 + (2 + 3)
a = 6

a = 6

2. b *= c = d + 2;

Avaliação da direita para a esquerda:

c = d + 2
c = 4 + 2
c = 6

b = b * c
b = 2 * 6
b = 12

b = 12, c = 6

3. d %= a + a + a;
d = 4 % (6 + 6 + 6)
d = 4 % 18
d = 4

d = 4

4. d -= c -= b -= a;

Avaliação da direita para a esquerda:

b = b - a
b = 12 - 6
b = 6

c = c - b
c = 6 - 6
c = 0

d = d - c
d = 4 - 0
d = 4

b = 6, c = 0, d = 4

5. a += b += c += 7;

Avaliação da direita para a esquerda:

c = c + 7
c = 0 + 7
c = 7

b = b + c
b = 6 + 7
b = 13

a = a + b
a = 6 + 13
a = 19

a = 19, b = 13, c = 7
```
