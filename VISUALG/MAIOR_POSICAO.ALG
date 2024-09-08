Algoritmo "maior_posicao"

Var
n, posicao, i : inteiro
maior: real
v : vetor [0..9] de real


Inicio
 escreva("Quanto numeros voce vai digitar? ")
 leia(n)
 
para i de 0 ate n-1 faca
       escreva("Digite um numero: ")
       leia(v[i])
fimpara
maior <- v[0]

para i de 1 ate n-1 faca
       posicao <- i
       se v[i] > maior entao
          maior <- v[i]
       fimse
fimpara

escreval("MAIOR VALOR = ", maior)
escreval("POSICAO DO MAIOR VALOR = ", posicao)

Fimalgoritmo