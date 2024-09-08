Algoritmo "semnome"

Var
n, m, i, j, quant : inteiro
mat : vetor [0..9,0..9] de inteiro
v : vetor [0..9] de inteiro

Inicio
escreva("Qual a quantidade de linhas da matriz? ")
leia(m)
escreva("Qual a quantidade de colunas da matriz? ")
leia(n)

para i de 0 ate m-1 faca
       escreva("Digite os elementos da",i+1 ,"a. linha: ")
       para j de 0 ate n-1 faca
              leia(mat[i,j])
       fimpara
fimpara

para i de 0 ate m-1 faca
       v[i] <- 0
       para j de 0 ate n-1 faca
              v[i] <- v[i] + mat[i,j]
       fimpara
fimpara

escreval("Vetor gerado: ")
para i de 0 ate m-1 faca
 escreval(v[i])
fimpara


Fimalgoritmo