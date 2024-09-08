Algoritmo "divisao"

Var
divisao, a, b : real
i, n : inteiro


Inicio

escreval("Quantos casos vai digitar: ")
leia(n)

para i de 1 ate n faca
     escreval("Entre com o numerador: ")
     leia(a)
     escreval("Entre com o denominador: ")
     leia(b)

     se b = 0 entao
      escreval("DIVISAO IMPOSSIVEL")
     senao
      divisao <- a / b
      escreval("Divisao :", divisao:2:2)
     fimse
fimpara


Fimalgoritmo