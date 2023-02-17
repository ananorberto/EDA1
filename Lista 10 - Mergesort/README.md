### Lista 10 - MergeSort
> Aula colocada no MOJ - [Números Malucos Únicos Reinseridos](https://youtu.be/wQF22mk8a1s)
ㅤ

* A - Intercala8 - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista10-mergesort/intercala8.pdf)

* B - Implemente o MergeSort - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista10-mergesort/ordenaelaborado.pdf)

* C - Implemente o MergeSort 2 - [[LINK]](http://www.spoj.com/problems/MERGSORT.pdf)

* D - Busca Binária - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista10-mergesort/busca-binaria-1.pdf)

* E - Número Proibido - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista10-mergesort/proibido.pdf)

* F - Números Malucos Únicos Reinseridos - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista10-mergesort/nmur.pdf)

* G - Analisando Dados de Degustação - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-lista10-mergesort/sequencia-desgustacao.pdf)

#
### Como funciona o MergeSort?


> [Aula sobre MergeSort - Bruno Ribas](https://youtu.be/dSaQwQhbYMU)

O Merge Sort é um algoritmo de ordenação eficiente que usa o paradigma **"divir e conquistar"** para dividir o array em pedaços menores, ordenar cada pedaço e depois combiná-los para obter o array ordenado completo. O algoritmo consiste nos seguintes passos:

1. Divisão: O array é dividido ao meio recursivamente até que cada subarray tenha apenas um elemento.

2. Conquista: Cada subarray é ordenado usando o método de comparação (por exemplo, utilizando o próprio Merge Sort).

3. Combinação: Os subarrays ordenados são mesclados em um único array ordenado, comparando o primeiro elemento de cada subarray e adicionando o menor ao array resultante. Esse processo é repetido até que todos os elementos estejam no array resultante.

O Merge Sort é um **algoritmo estável**, o que significa que a ordem relativa dos elementos iguais no array de entrada é preservada no array ordenado. Ele também é muito eficiente, com complexidade de tempo de `O(n log n)`, o que o torna adequado para ordenar grandes conjuntos de dados. No entanto, o Merge Sort usa um espaço adicional para armazenar os subarrays durante o processo de mesclagem, o que pode ser uma desvantagem em termos de memória em relação a outros algoritmos de ordenação in-place.

#
#### Um pouco sobre Busca Binária

A busca binária é como adivinhar um número em um jogo de "adivinhe o número" em que o seu amigo pensou em um número de 1 a 100. Em vez de adivinhar um número de cada vez sequencialmente, você pergunta ao seu amigo se o número que ele pensou é maior ou menor que o número do meio (no caso, o número 50). Se o número dele for maior, você ignora todos os números menores que 50 e repete o processo na metade superior do conjunto de números (51 a 100). Se o número dele for menor, você ignora todos os números maiores que 50 e repete o processo na metade inferior do conjunto de números (1 a 49). Você continua repetindo esse processo de divisão ao meio até achar o número certo.

Na busca binária de um array, o processo é semelhante: você compara o elemento do meio do array com o elemento que você está procurando. Se o elemento do meio for maior, você procura na metade inferior do array, ignorando a metade superior. Se o elemento do meio for menor, você procura na metade superior do array, ignorando a metade inferior. Esse processo é repetido até encontrar o elemento procurado ou até que não haja mais elementos para verificar.

O processo de busca binária é bastante rápido, pois a cada iteração o tamanho do conjunto de elementos a serem verificados é reduzido pela metade. Sua **complexidade** de tempo é `O(log n)`, onde n é o tamanho do array, o que o torna muito eficiente para conjuntos de dados grandes.

No entanto, a **busca binária só funciona em arrays ordenados**. Se o array não estiver ordenado, é necessário ordená-lo primeiro, o que pode levar tempo e aumentar a complexidade do algoritmo. Além disso, a busca binária pode ser mais complexa de implementar do que a busca sequencial para alguns casos simples.