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