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

O código não está adequado ao padrão ANSI C, pois faltam as diretivas `#include <stdio.h>` e `#include <stdlib.h>`, necessárias para as funções `printf()` e `system()`.

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

1. Falta `int` na declaração da função `main()`.
2. `b` e `c` não foram declaradas corretamente.
3. Foi utilizado `:` após `c=3` em vez de `;`.
4. As aspas do `printf` estão posicionadas incorretamente.
5. A variável `d` não foi declarada.
6. Faltam as diretivas `#include <stdio.h>` e `#include <stdlib.h>`.

**Erros de lógica:**

1. A variável `d` foi utilizada no `printf`, mas não existe.
2. `"0s números"` utiliza o número `0` em vez da letra `O`.

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