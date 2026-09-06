# LeetCode 43 - Multiply Strings

**Aluno:** Samuel da Silva Jaskulski   
**Link do repositório:** https://github.com/samueljaskulski/Algoritmos-e-Estruturas-de-Dados-I

## O que o problema pede
O exercício pede para multiplicar dois números grandes passados como string (num1 e num2) e retornar o resultado também em string. Não pode converter a string direto para inteiro (tipo `atoll`) nem usar bibliotecas prontas como BigInteger.

## O que funciona e o que não funciona

* O que funciona: 
  Funciona para números grandes (até 200 dígitos).
  Trata os casos com zero.
  Não tem vazamento de memória.
  Passou em todos os testes locais e no LeetCode.

* **O que não funciona:** 
  * Não encontrei erros nos testes exigidos pelo problema.

## 3 Testes que rodei localmente

1. **Teste com carry:** 9 * 9 = 81 -> OK
2. **Teste com zeros:** 100 * 100 = 10000 -> OK
3. **Teste com mais de 19 dígitos (estoura long long):**  
   98765432109876543210 * 12345678901234567890 = 1219326311370217952237463801111263526900 -> OK

## Resultado no LeetCode
Passou no Submit.

## Comparação com o Editorial do LeetCode

O editorial do LeetCode mostra duas formas de resolver:
1. Fazendo a multiplicação e somando cada linha intermediária.
2. Usando um vetor para ir guardando as somas das posições e tratando o carry direto no índice i + j + 1.

Eu usei a segunda opção porque fica bem mais simples de codificar e não precisa ficar criando e somando várias strings no meio do caminho.


## Complexidade

* **Tempo:**- Precisa cruzar cada dígito do primeiro número com cada dígito do segundo.
* **Espaço:** - Usado para criar o vetor de inteiros intermediário e a string final de resposta.

## Dificuldades e uso de IA

Tive dificuldade no começo para entender a lógica dos índices (i + j e i + j + 1) para guardar o resultado e o vai um no vetor de inteiros, e também na parte de ignorar os zeros que sobram no começo da resposta.

Usei o Gemini para tirar dúvidas e ajudar a terminar o código, não consegui terminar ele sozinho, também entender a lógica dos índices do vetor e me ajudar a alocar a memória dinamicamente.
