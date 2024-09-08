Algoritmo "media_ponderada"

Var
i, n : inteiro
media, a, b, c : real


Inicio
escreval("Quantos casos voce vai digitar : ")
leia(n)

para i de 1 ate n faca
     escreval("Digite tres numeros: ")
     leia(a)
     leia(b)
     leia(c)
     media <- (2 * a + 3 * b + 5 * c) / 10
     escreval("MEdia = ", media)

fimpara


Fimalgoritmo