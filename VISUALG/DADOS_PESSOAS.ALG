Algoritmo "DADOS_PESSOAS"

Var
a : vetor [0..9] de real
g : vetor [0..9] de caractere
quant, i, n : inteiro
menor, maior, media : real

Inicio
escreva("Quantas pessoas serao digitadas? ")
leia(n)


para i de 0 ate n-1 faca
     escreva("Altura da ", i+1,"a pessoa: ")
     leia(a[i])
     escreva("Genero da ", i+1,"a pessoa: ")
     leia(g[i])
fimpara

menor <- a[0]
maior <- a[0]

para i de 0 ate n-1 faca

     se a[i] < menor entao
        menor <- a[i]
     fimse
     
     se maior < a[i] entao
        maior <- a[i]
     fimse
fimpara


para i de 0 ate n-1 faca
     se g[i] = "F" entao
        media <- media + a[i]
     senao
        quant <- quant + 1
     fimse
fimpara

media <- media / (n-quant)

escreval("Menor altura = ", menor)
escreval("Maior altura = ", maior)
escreval("Media das alturas das mulheres = ", media:2:2)
escreval("Numero de homens = ", quant)

Fimalgoritmo