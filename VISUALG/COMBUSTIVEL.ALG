Algoritmo "combustivel"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/08/2024
Var
alcool, gasolina, diesel, cod : inteiro


Inicio
escreva("Informe um codigo (1, 2, 3) ou 4 para parar:")
leia(cod)
enquanto cod <> 4 faca
         escolha cod
         caso 1
              alcool <- alcool + 1
         caso 2
              gasolina <- gasolina + 1
         caso 3
              diesel <- diesel + 1
         fimescolha
         escreva("Informe um codigo (1, 2, 3) ou 4 para parar:")
         leia(cod)
fimenquanto
escreval("MUITO OBRIGADO")
escreval("Alcool: ", alcool)
escreval("Gasolina: ", gasolina)
escreval("Diesel: ", diesel)

Fimalgoritmo