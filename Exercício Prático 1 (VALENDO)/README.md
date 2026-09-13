# LeetCode 53 - Maximum Subarray
Aluno: Samuel da Silva Jaskulski
## O Problema

Encontrar a subarray contígua com a maior soma dentro de um array de inteiros e retornar esse valor.

* **Exemplo:** `nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]` $\rightarrow$ **Saída:** `6` (subarray `[4, -1, 2, 1]`)

## Evolução da Solução

### 1. Primeira Tentativa feita em aula (Erros Encontrados)
* `msoma = 0` quebrava o código quando todos os números eram negativos (ex: `[-2, -1]`), pois retornava `0` em vez do maior negativo.
* O uso de `if(temp -= nums[i] > temp)` alterava variáveis indevidamente no meio da comparação.
* O código tentava "desfazer" a soma em vez de decidir se valia a pena continuar a subarray anterior.

### 2. Solução Ajustada
* `msoma` e `temp` começam com `nums[0]`, cobrindo arrays 100% negativos.
*Para cada elemento `nums[i]`, avalia-se se é melhor somá-lo ao histórico (`temp + nums[i]`) ou recomeçar a subarray a partir dele (`nums[i]`), descartando o passado quando ele for negativo e prejudicial.
* Se a soma atual (`temp`) for maior que `msoma`, atualiza-se o resultado global.
