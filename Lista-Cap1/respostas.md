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

