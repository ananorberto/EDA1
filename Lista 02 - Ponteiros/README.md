### Lista 2 - Pequenos ponteiros
ㅤ
* A - Ajude Aparecido - Simplificado [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista2-ptr/ajude_simplificado.pdf)
* A1 - Ajude Aparecido [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista2-ptr/ajude.pdf)
* B - Soma2 [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista2-ptr/soma2_funcao.pdf)
* B1 - Faça as contas [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista2-ptr/faca-as-contas.pdf)
* B2 - Swap [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista2-ptr/swap.pdf)
* C - Strings secretas [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista2-ptr/str-secreta.pdf)

#
### O que são ponteiros em C?

Um ponteiro é uma variável que armazena um endereço de memória. Em outras palavras, um ponteiro aponta para a localização de um valor na memória, sendo possível acessar e modificar o valor armazenado em uma determinada posição da memória.

Um ponteiro é declarado usando o operador `*` antes do nome da variável. 
Exemplo:

```c
int *ptr;

```

Isso declara uma variável `ptr` que é um ponteiro para um valor inteiro. Para atribuir um endereço a um ponteiro, usamos o operador de endereço "&" (e comercial). 
Exemplo:

```c
int num = 10;
int *ptr = &num;

```

Desta forma, a variável `ptr` aponta para o endereço de memória de `x`. usando o operador `&`. Para acessar o valor de `x` armazenado no endereço apontando pelo ponteiro usamos `*`.

```c
int num = 10;
int *ptr = &num;
printf("O valor de num é %d", *ptr);

```
Neste exemplo, é usado o operador asterisco para acessar o valor armazenado no endereço apontado por "ptr", que é o valor da variável "num". O resultado da impressão será `O valor de num é 10`.