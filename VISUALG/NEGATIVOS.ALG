Algoritmo "negativos"

Var
n, i : inteiro
a : vetor [0..9] de real
Inicio
escreval("Quantos numeros voce vai digitar? ")
leia(n)

para i de 0 ate n-1 faca
       escreval("Digite um numero: ")
       leia(a[i])
fimpara
escreval("Numeros Negativos: ")
para i de 0 ate n-1 faca
     se a[i] < 0 entao
        ESCREVA(a[i])
     fimse

fimpara



Fimalgoritmo