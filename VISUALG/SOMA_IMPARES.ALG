Algoritmo "semnome"

Var
x, y, troca, i, soma :inteiro

Inicio
escreval("Digite dois numeros: ")
leia(x)
leia(y)

 se x > y entao
    troca <- x
    x <- y
    y <- troca
 fimse
 
 para i de x+1 ate y-1 faca
      se i % 2 <> 0 entao
         soma <- soma + i
      fimse
 fimpara

 escreva("Soma dos impares: ", soma)

Fimalgoritmo