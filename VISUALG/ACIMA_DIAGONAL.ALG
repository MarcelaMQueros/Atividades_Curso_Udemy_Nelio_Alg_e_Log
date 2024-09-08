Algoritmo "acima_diagonal"

Var
n,i,j, soma : inteiro
a : vetor [0..9,0..9] de inteiro

Inicio
escreva("Qual a ordem da matriz? ")
leia(n)

para i de 0 ate n-1 faca
     para j de 0 ate n-1 faca
            escreva("Elemento [",i,",",j,"]:")
            leia(a[i,j])
     fimpara
fimpara

para i de 0 ate n-1 faca
     para j de i+1 ate n-1 faca
            soma <- soma + a[i,j]
     fimpara
fimpara

escreval("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = ", soma)
Fimalgoritmo