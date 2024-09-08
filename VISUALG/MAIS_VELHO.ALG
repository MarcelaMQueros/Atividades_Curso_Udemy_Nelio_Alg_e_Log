Algoritmo "mais_velho"

Var
n, i, idade, maisvelha, posicao : inteiro
id : vetor [0..9] de inteiro
nome : vetor [0..9] de caractere


Inicio
escreva("Quantas pessoas voce vai digitar? ")
leia(n)

para i de 0 ate n-1 faca
       escreval("Dados da", i+1, "a pessoa: ")
       escreva("Nome: ")
       leia(nome[i])
       escreva("Idade: ")
       leia(id[i])
fimpara

para i de 0 ate n-1 faca
       se id[i]  > maisvelha entao
          maisvelha <- id[i]
          posicao <- i
       fimse
fimpara
escreva("Pessoa mais velha: ", nome[posicao])



Fimalgoritmo