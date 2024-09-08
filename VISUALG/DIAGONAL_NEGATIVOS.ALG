Algoritmo "diagonal_negativos"


Var
n, i, j, quant : inteiro
mat : vetor [0..9,0..9] de inteiro


Inicio
escreva("Qual a ordem da matriz? ")
leia(n)

para i de 0 ate n-1 faca
       para j de 0 ate n-1 faca
              escreva("Elemento [",i,",",j,"]: ")
              leia(mat[i,j])
       fimpara
fimpara
escreval("DIAGONAL PRINCIPAL: ")
para i de 0 ate n-1 faca
       para j de 0 ate n-1 faca
       se i = j entao
          escreval(mat[i,j])
       fimse
       se mat[i,j] < 0 entao
          quant <- quant + 1
       fimse
       fimpara
fimpara
escreva("QUANTIDADE DE NEGATIVOS = ", quant)
Fimalgoritmo