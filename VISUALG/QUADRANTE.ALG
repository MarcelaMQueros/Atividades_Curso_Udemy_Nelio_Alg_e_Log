Algoritmo "quadrante"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/08/2024
Var
x,y : real


Inicio
escreval("Digite os valores das coordenadas X e Y: ")
leia(x)
leia(y)

enquanto (x <> 0) e (y <> 0) faca
           se (x > 0) e (y > 0) entao
              escreval("QUADRANTE Q1")
           senao
                se (x < 0) e (y < 0) entao
                   escreval("QUADRANTE Q3")
                senao
                     se x < 0 entao
                        escreval("QUADRANTE Q2")
                     senao
                          escreval("Quadrante Q4")
           fimse
                fimse
                     fimse


           escreva("Digite os valores das coordenadas X e Y: ")
           leia(x)
           leia(y)
fimenquanto


Fimalgoritmo