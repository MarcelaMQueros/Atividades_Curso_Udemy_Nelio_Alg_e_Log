Algoritmo "matriz_geral"

Var
n,i,j, linha, coluna : inteiro
a : vetor [0..9,0..9] de real
soma : real
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
     para j de 0 ate n-1 faca
            se a[i,j] > 0 entao
               soma <- soma + a[i,j]
            fimse
     fimpara
fimpara
escreval
escreval("SOMA DOS POSITIVOS: ", soma:2:2)
escreval
escreva("Escolha uma linha: ")
leia(linha)

para j de 0 ate n-1 faca
       escreva(a[linha, j]:2:2, " ")
fimpara
escreval

escreva("Escolha uma coluna: ")
leia(coluna)
para i de 0 ate n-1 faca
       escreva(a[i, coluna]:2:2, " ")
fimpara
escreval

escreva("Diagonal principal: ")
para i de 0 ate n-1 faca
       escreva(a[i, i]:2:2, " ")
fimpara
escreval

para i de 0 ate n-1 faca
       para j de 0 ate n-1 faca
              se a[i,j] < 0 entao
                 a[i,j] <- Exp(a[i,j],2)
              fimse
       fimpara
fimpara

escreval("MATRIZ ALTERADA: ")

para i de 0 ate n-1 faca
       para j de 0 ate n-1 faca
              escreva(a[i, j]:2:2, " ")
       fimpara
fimpara


Fimalgoritmo