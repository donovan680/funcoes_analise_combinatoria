# funcoes_analise_combinatoria
exemplo de programa em C++ que implementa funções de análise combinatória, calculando o número de combinações (coeficiente binomial) e também, opcionalmente, o número de permutações. O programa apresenta um menu para que o usuário escolha qual cálculo deseja realizar.
Segue um exemplo de programa em C++ que implementa funções de análise combinatória, calculando o número de combinações (coeficiente binomial) e também, opcionalmente, o número de permutações. O programa apresenta um menu para que o usuário escolha qual cálculo deseja realizar:

### Explicação:
- **Cálculo de Fatorial:** A função `fatorial()` realiza a multiplicação de todos os números inteiros de 1 até n. Essa função é útil para compreender a base dos cálculos, apesar de não ser usada diretamente na função de combinação (para evitar excesso de multiplicações e divisões, é utilizada a técnica de redução progressiva).
- **Cálculo de Combinações:** A função `combinacao()` calcula o coeficiente binomial usando um laço que evita computar fatorias grandes, melhorando a eficiência e evitando problemas de overflow para valores maiores.
- **Cálculo de Permutações:** A função `permutacao()` calcula as permutações usando um laço simples que multiplica os termos decrescentes (n, n-1, ..., n-k+1).
- **Menu Interativo:** O `main()` oferece um menu para o usuário escolher entre calcular combinações ou permutações, e então solicita os valores de n e k para efetuar o cálculo.

Esse exemplo é especialmente útil para estudos iniciais em análise combinatória e pode ser estendido para problemas mais complexos ou integrado em sistemas que precisem de cálculos combinatórios. Se você se interessar por outras aplicações, por exemplo, gerar combinações ou permutações de elementos de um conjunto, posso mostrar exemplos adicionais!
