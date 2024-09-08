Algoritmo "numeros_pares"


Var
i, n, cont : inteiro
a : vetor [0..9] de real



Inicio
escreval("Quantos numeros voce vai digitar?")
leia(n)

para i de 0 ate n-1 faca
       escreva("Digite um numero ")
       leia(a[i])
fimpara

escreval("Numeros pares: ")
para i de 0 ate n-1 faca
       se a[i] % 2 = 0 entao
          escreva(a[i], " ")
          cont <- cont + 1
       fimse
fimpara
escreval
escreval("QUANTIDADE DE PARES: ", cont)

Fimalgoritmo