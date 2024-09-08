Algoritmo "soma_vetor"

Var
n, i : inteiro
a : vetor [0..9] de real
soma, media : real


Inicio
escreval("Quantos numeros voce vai digitar? ")
leia(n)

para i de 0 ate n-1 faca
       escreval("digite um numero")
       leia(a[i])
fimpara

escreval("Valores = ")
para i de 0 ate n-1 faca
     escreval(a[i]:2:2, " ")

fimpara

para i de 0 ate n-1 faca
  soma <- soma + a[i]
fimpara

media <- soma / n
escreval("Soma", soma:2:2)
escreval("MEdia", media:2:2)


Fimalgoritmo