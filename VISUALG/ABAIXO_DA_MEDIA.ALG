Algoritmo "abaixo_da_media"

Var
n, i : inteiro
media, abaixo : real
v : vetor [0..9] de real


Inicio
escreva("Quantos elementos vai ter o vetor?")
leia(n)
para i de 0 ate n-1 faca
       escreval("Digite um numero: ")
       leia(v[i])
fimpara

para i de 0 ate n-1 faca
       media <- media + v[i]
fimpara
media <- media / n
escreval("Media do vetor = ", media)
escreval("Elementos abaixo da media: ")
para i de 0 ate n-1 faca
       se media > v[i] entao
            escreval(v[i]:2:1)
       fimse
fimpara



Fimalgoritmo