# Respostas Teóricas - Atividade

## Questão 04
### Erros encontrados

1. `#include <stdlib.h>;` possui um `;` indevido.
2. `Main` deve ser escrito como `main`.
3. A função `main` deve utilizar parênteses: `main()`.
4. O corpo da função deve ser delimitado por `{}`.
5. O texto do `printf` deve estar entre aspas.
6. `cout << endl` pertence à linguagem C++, não à linguagem C.

### Código corrigido

```c
#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}
```

## Questão 05

### Resposta

o código não está adequado ao padrão ANSI C, pois faltam as diretivas `#include <stdio.h>` e `#include <stdlib.h>`, necessárias para as funções `printf()` e `system()`.

Outro ponto é qeue a função principal deve ser declarada como `int main()` e deve possuir `return 0;` para indicar o encerramento correto do programa.

### Código corrigido

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Linguagem C");
    system("pause");
    return 0;
}
```

## Questão 06

### Erros encontrados

**Erros de sintaxe:**

1. falta `int` na declaração da função `main()`.
2. `b` e `c` não foram declaradas corretamente.
3. foi utilizado `:` após `c=3` em vez de `;`.
4. as aspas do `printf` estão posicionadas incorretamente.
5. a variável `d` não foi declarada.
6. faltam as diretivas `#include <stdio.h>` e `#include <stdlib.h>`.

**Erros de lógica:**

1. a variavel `d` foi utilizada no `printf`, mas nao existe
2. `"0s números"` utiliza o numero `0` em vez da letra `O`.

### Código corrigido

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;

    printf("Os números são: %d %d %d\n", a, b, c);
    system("pause");
    return 0;
}
```

## Questão 07

### Resposta

**a)**

Saída:

```text
    Bom dia! Shirley.
```

**b)**

Sada:

```text
Você já tomou café?
```

**c)**

Saida:

```text


A solução não existe!
Não insista.
```

**d)**

Saida:

```text
Duas    linhas  de  saída
ou      uma?
```

**e)**

Saída:

```text
um
dois
três
```
## Questão 08

### Resposta

o programa imprime a frase "Primeiro programa" com uma quebra de linha no início e uma tabulaçao antes do texto.

- `\n` faz uma quebra de linha.
- `\t` adiciona uma tabulaçao no inicio da linha.
- `\"` imprime aspas duplas na tela.

### Saida

```text

    "Primeiro programa"
```
## Questão 09

### Resposta

o programa usa `%c` para imprimir um caractere por vez.

- `'\n'` faz uma quebra de linha.
- `'\t'` adiciona uma tabulação.
- `'\"'` imprime uma aspas dupla (`"`).

O segundo `printf` está incorreto, porque `%c` espera um caractere mas `"\""` é uma string.

### Saida do primeiro `printf`

```text

    "Primeiro programa
```

### Código corrigido

```c
printf("%c", '\"');
```

## Questão 10

### Resposta

**alternativa correta:** **b) Verdadeiro.**

a linguagem C é case sensitive, ou seja, diferencia letras maiúsculas de minssculas. Por isso, `peso`, `Peso` e `PESO` representam variáveis diferentes na memória.

### Exemplo

```c
int peso = 70;
int Peso = 80;
int PESO = 90;
```

nesse exemplo o compilador cria três variáveis diferentes.
```

## Questão 11

### Resposta

| Constante | Classificação (Tipo de Constante) | Tipo Base em C |
|-----------|------------------------------------|----------------|
| `'\r'` | Constante de caractere (sequência de escape) | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal | `int` |
| `33.28` | Constante de ponto flutuante | `double` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal | `int` |
| `2.0e30` | Constante de ponto flutuante (notação científica) | `double` |
| `'\xDC'` | Constante de caractere (sequência hexadecimal) | `char` |
| `"\""` | Constante string | `char[]` |
| `'\\'` | Constante de caractere (barra invertida) | `char` |
| `'F'` | Constante de caractere | `char` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Constante de caractere (caractere nulo) | `char` |
| `"F"` | Constante string | `char[]` |
| `-4567.89` | Constante de ponto flutuante | `double` |

```

## Questão 12

### Resposta

| Instrução | Status | Justificativa |
|-----------|--------|---------------|
| `int a;` | **Correto** | Declara uma variável inteira do tipo `int`. |
| `float b;` | **Correto** | Declara uma variável de ponto flutuante do tipo `float`. |
| `double float c;` | **Incorreto** | Não é permitido usar `double` e `float` juntos na mesma declaração. |
| `unsigned char d;` | **Correto** | Declara uma variável do tipo `char` sem sinal. |
| `unsigned e;` | **Correto** | `unsigned` equivale a `unsigned int`. |
| `long float f;` | **Incorreto** | `long float` não existe em C. O correto seria `long double`. |
| `long g;` | **Correto** | Declara uma variável inteira do tipo `long int`. |
| `long double h;` | **Correto** | Declara uma variável de ponto flutuante de dupla precisão estendida. |
```
## Questão 13

### Resposta

**alternativa correta:** **c)** São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

```

## Questão 14

### Resposta

**alternativa correta:** **a)** Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

```

## Questão 15

### Resposta

**alternativa correta:** **c)** Uma diretiva especial para o pré-processador C, executada antes da compilação.

```
## Questão 16

### Resposta

**alternativa correta:** **c)** Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

```

## Questão 17

### Resposta

**Corretas:** **a), b) e c).**

a alternativa **d)** está incorreta, pois `printf` deve ser chamada com parênteses.

```



