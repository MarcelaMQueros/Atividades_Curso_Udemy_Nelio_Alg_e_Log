Algoritmo "dardo"

Var
// Seção de Declarações das variáveis 
     a,b,c, maior : real

Inicio
escreva("Digite as tres distancias: ")
leia(a)
leia(b)
leia(c)

se (a > b) e (a > c) entao
   maior <- a
senao
     se b > c entao
        maior <- b
     senao
           maior <- c
     fimse
fimse
escreva("MAIOR DISTANCIA = ", maior:4:2)

Fimalgoritmo
fimse