Algoritmo "media_pares"

Var
n, i, cont : inteiro
mediap : real
v : vetor [0..9] de real


Inicio
escreva("Quantos elementos vai ter o vetor?")
leia(n)
para i de 0 ate n-1 faca
       escreval("Digite um numero: ")
       leia(v[i])
fimpara

para i de 0 ate n-1 faca
       se v[i]  % 2 = 0 entao
          mediap <- mediap + v[i]
          cont <- cont + 1
       fimse
fimpara

mediap <- mediap / cont

se cont = 0 entao
   escreva("NENHUM NUMERO PAR ")
senao
     escreva("MEDIA DOS PARES = ", mediap:2:1)
fimse


Fimalgoritmo