# Projeto de Alocação Dinâmica em C

Este projeto tem como objetivo demonstrar o uso de alocação dinâmica de memória em linguagem C. Através da criação e manipulação de estruturas de dados, exploramos como o gerenciamento de memória pode ser feito de forma eficiente, utilizando funções como `malloc()`, `calloc()`, `realloc()`, e `free()`.

## Descrição do Projeto

O projeto envolve a criação de estruturas dinâmicas para armazenar e manipular dados, permitindo que o programa altere seu uso de memória durante a execução. Isso é essencial em programas onde o tamanho dos dados pode variar ou não é conhecido previamente. Através dessas funcionalidades, conseguimos controlar os endereços de memória manualmente, otimizando o desempenho do programa e prevenindo vazamentos de memória.

## Funcionalidades

### 1. **Alocação de Memória Dinâmica**
   - Utilizamos as funções `malloc()` e `calloc()` para alocar memória de forma dinâmica.
   - A função `malloc()` permite alocar um bloco de memória de tamanho definido, enquanto a `calloc()` aloca e inicializa os blocos de memória.
   
### 2. **Manipulação de Endereços**
   - Após a alocação de memória, o endereço de cada bloco alocado é manipulado diretamente através de ponteiros.
   - A utilização de ponteiros permite acessar e modificar o conteúdo armazenado nos blocos de memória de forma eficiente.
   - Um exemplo simples é a manipulação de arrays dinâmicos, onde podemos aumentar ou reduzir o tamanho do array conforme necessário.

### 3. **Redimensionamento de Memória**
   - O projeto inclui o uso da função `realloc()` para ajustar o tamanho da memória já alocada.
   - Isso permite que, se o programa precisar de mais (ou menos) memória, o espaço seja ajustado sem a necessidade de liberar e alocar novamente, mantendo os dados já armazenados.

### 4. **Liberação de Memória**
   - Após o uso dos blocos de memória, garantimos a liberação de cada um deles utilizando a função `free()`, prevenindo assim vazamentos de memória.
   - A liberação de memória é crítica para garantir que os recursos do sistema sejam liberados corretamente, especialmente em aplicações de longa duração.

### 5. **Trabalho com Estruturas de Dados Dinâmicas**
   - Além da manipulação de arrays e ponteiros, também utilizamos alocação dinâmica para trabalhar com estruturas de dados personalizadas, como listas ligadas e árvores binárias.
   - Essas estruturas são construídas de forma dinâmica, permitindo a inserção e remoção de nós conforme necessário.
