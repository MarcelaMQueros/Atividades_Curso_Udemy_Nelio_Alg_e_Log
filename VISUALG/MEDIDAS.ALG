Algoritmo "medidas"

Var
  A,B,C, areaQ, areaT, areaTP : real

Inicio
escreva("Digite a medida A: ")
leia(A)
escreva("Digite a medida B: ")
leia(B)
escreva("Digite a medida C: ")
leia(C)

areaQ <- exp(A,2)
areaT <- A * B / 2
areaTP <- (A + B) * C / 2

escreval("AREA DO QUADRADO = ", areaQ:6:4)
escreval("AREA DO TRIANGULO = ", areaT:6:4)
escreval("AREA DO TRAPEZIO = ", areaTP:6:4)
Fimalgoritmo