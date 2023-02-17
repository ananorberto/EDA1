### Lista 3 - Pequena Recursão
ㅤ
* A - F91 - Simplificado [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista3-recursao/f91.pdf)
* B - Move os Xs [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista3-recursao/moveX.pdf)
* C - Rumo aos 9s [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista3-recursao/rumo9s.pdf)
* D - Soma dos dígitos [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista3-recursao/soma-digitos.pdf)
* E - Fibonacci espertinho [[PDF]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista3-recursao/fibonacci-memoizacao.pdf)


#
### O que recursão em C?

Recursão, é uma técnica de programação que permite a uma função *chamar a si mesma* para resolver um problema. Essa técnica é útil quando o problema pode ser dividido em subproblemas menores, que podem ser resolvidos usando a mesma função.

Em C, uma função recursiva é definida da mesma forma que uma função normal, exceto que a função chama a si mesma dentro de seu próprio corpo. É importante que a função tenha uma condição de parada ou "caso base", que impede a recursão infinita e encerra a recursão quando a condição é atendida.

Por exemplo, a função fatorial é um exemplo clássico de uma função que pode ser implementada de forma recursiva. O fatorial de um número inteiro positivo n é definido como o produto de todos os números inteiros de 1 a n, ou seja, n! = 1 x 2 x 3 x ... x n. A implementação recursiva do fatorial em C é mostrada abaixo:


```c
int fatorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    } 
    else 
    {
        return n * fatorial(n-1);
    }
}

```

Neste exemplo, a função fatorial chama a si mesma com um valor decrementado de n até que n atinja o valor de 0. Quando n é 0, a função retorna 1, que é o caso base. Se n for maior que 0, a função calcula o fatorial de n-1 e multiplica o resultado por n, que é retornado como o fatorial de n.

>Embora a recursão possa tornar o código mais elegante e mais fácil de entender em alguns casos, é importante lembrar que o uso excessivo de recursão pode levar a problemas de desempenho e estouro de pilha. 