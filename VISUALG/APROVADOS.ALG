Algoritmo "aprovados"

Var
i, n : inteiro
nome : vetor [0..9] de caractere
notaprimero, notasegundo : vetor [0..9] de real
soma : real

Inicio
escreva("Quantos alunos serao digitados? ")
leia(n)
para i de 0 ate n-1 faca
     escreva("Digite nome, primeira e segunda nota do ",i+1,"o aluno: ")
     leia(nome[i])
     leia(notaprimero[i])
     leia(notasegundo[i])
fimpara
escreval("Alunos aprovados: ")

para i de 0 ate n-1 faca
     soma <-  notaprimero[i] + notasegundo[i]
       se soma > 14 entao
          escreval(nome[i])
       fimse
fimpara
Fimalgoritmo
