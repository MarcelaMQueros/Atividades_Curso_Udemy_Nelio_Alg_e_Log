Algoritmo "temperatura"

Var
cf : caractere
F,C : real


Inicio
escreva("Voce vai digitar a temperatura em qual escala (C/F)? ")
leia(cf)

se cf = "F" entao
   escreva("Digite a temperatura em Fahrenheit: ")
   leia(F)
   C <- 5 / 9 * (F - 32)
   escreval("Temperatura equivalente em Celsius: ", C:4:2)
senao
     escreva("Digite a temperatura em Celsios: ")
     leia(C)
     F <- 9 * C / 5+ 32
     escreval("Temperatura equivalente em Fahrenheit: ", F:4:2)
fimse


Fimalgoritmo