Algoritmo "alturas"

Var
i, n, cont : inteiro
id : vetor [0..9] de inteiro
a : vetor [0..9] de real
nome : vetor [0..9] de caractere
media, soma, porcentagem : real


Inicio
escreval("Quantas pessoas serao digitadas? ")
leia(n)

para i de 0 ate n-1 faca
     escreval("Dados da ", i+1, "a pessoa: ")
     escreva("Nome: ")
     leia(nome[i])
     escreva("Idade: ")
     leia(id[i])
     escreva("Altura: ")
     leia(a[i])
fimpara

soma <- 0
para i de 0 ate n-1 faca
     soma <- soma + a[i]
fimpara


media <- soma/n
escreval("Altura media ", media:2:2)

cont <- 0
para i de 0 ate n-1 faca
     se id[i] < 16 entao
        cont <- cont +1
     fimse
fimpara

   porcentagem <- cont * 100 / n
   escreval("Pessoas com menos de 16 anos: ", porcentagem:2:2, "%")

para i de 0 ate n-1 faca
      se id[i] < 16 entao
         escreval(nome[i])
      fimse
fimpara
Fimalgoritmo