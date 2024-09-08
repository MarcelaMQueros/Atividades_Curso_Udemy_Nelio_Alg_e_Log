Algoritmo "BASKARA"



Var
 cA, cB, cC, x1, x2, delta : real


Inicio
  escreva("Coeficiente a: ")
  leia(cA)
  escreva("Coeficiente b: ")
  leia(cB)
  escreva("Coeficiente c: ")
  leia(cC)
  
  delta <- Exp(cB,2) - 4*cA*cC
  
  se (delta < 0) ou (cA = 0) entao
     escreva("Esta equacao nao possui raizes reais ")
  senao
       x1 <- (-cB + RaizQ(delta)) / (2*cA)
       x2 <- (-cB - RaizQ(delta)) / (2*cA)
       escreval("X1 = ", x1:5:4)
       escreval("X1 = ", x2:5:4)
  fimse
  
Fimalgoritmo