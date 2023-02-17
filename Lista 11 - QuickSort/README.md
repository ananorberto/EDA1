### Lista 11 - QuickSort
ㅤ
* A - Implemente o QuickSort - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-quicksort/ordenaelaborado.pdf)

* B - O fantástico Jáspion - [[LINK]](http://br.spoj.com/problems/JASPION.pdf)

* C - Eleição U.R.S.A.L - [[LINK]](https://moj.naquadah.com.br/contests/bcr-EDA1-2022_2-quicksort/eleicao-ursal.pdf)

#
### Como funciona o QuickSort?

> Aula sobre QuickSort - Bruno Ribas
[Função Separa](https://youtu.be/bfvxUyzcd_M)
[QuickSort Ingênuo](https://youtu.be/uqATK8S2fP8)
[QuickSort Mediana](https://youtu.be/V9EDV2QJhF4)


O QuickSort é um algoritmo de ordenação eficiente que utiliza o paradigma "dividir e conquistar" para ordenar um array. O algoritmo consiste nos seguintes passos:

1. Escolha um elemento pivô: Seleciona-se um elemento pivô do array, que será usado para dividir o array em duas partes.

2. Particionamento: O array é particionado em duas partes - a primeira contém todos os elementos menores ou iguais ao pivô, e a segunda contém todos os elementos maiores que o pivô. Isso é feito movendo os elementos menores ou iguais ao pivô para a esquerda do pivô e os elementos maiores para a direita do pivô.

3. Recursão: Repete-se os passos 1 e 2 em cada uma das duas partes do array. Isso é feito recursivamente até que não haja mais elementos a serem divididos.

4. Combinar: Por fim, os subarrays são combinados para produzir o array ordenado.

O algoritmo utiliza a estratégia de "divide e conquista" para quebrar o problema em subproblemas menores, ordenando-os de forma independente e, em seguida, combinando as soluções para produzir uma solução global. O QuickSort é muito eficiente e tem uma complexidade média de tempo de `O(n log n)`, tornando-o adequado para ordenar grandes conjuntos de dados.

No entanto, o QuickSort pode apresentar desempenho pior em alguns casos de **pior caso**, em que o pivô escolhido não é um bom divisor para o array, levando a muitas recursões e piorando a complexidade de tempo para `O(n^2)`. Existem várias estratégias para escolher o pivô de forma a minimizar o número de recursões e evitar o pior caso, como escolher o pivô aleatoriamente ou escolher um pivô que esteja próximo ao elemento mediano do array.

**OBS:** O QuickSort **não é um algoritmo de ordenação estável**, pois não preserva a ordem relativa de elementos iguais no array original.