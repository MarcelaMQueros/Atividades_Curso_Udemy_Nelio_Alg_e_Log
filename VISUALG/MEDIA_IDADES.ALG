Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/08/2024
Var
soma, idade, n, media : inteiro


Inicio
escreval("Digite as idades: ")
leia(idade)



 enquanto idade >= 0 faca
          soma <- soma + idade
          n <- n + 1
          leia(idade)
 fimenquanto
 
 se n = 0 entao
    escreva("IMPOSSIVEL CALCULAR")
 senao
     media <- soma / n
     escreva("MEDIA = ", media:2:2)
 fimse

Fimalgoritmo