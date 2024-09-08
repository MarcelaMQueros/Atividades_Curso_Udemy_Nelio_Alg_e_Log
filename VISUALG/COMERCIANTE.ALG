Algoritmo "comerciante"

Var
n,i, abaixo,entre,acima : inteiro
nome : vetor [0..9] de caractere
c , v : vetor [0..9] de real
compra, venda, lucro : real


Inicio
escreva("Serao digitados dados de quantos produtos? ")
leia(n)

para i de 0 ate n-1 faca
     escreval("Produto ",i+1)
     escreva("Nome: ")
     leia(nome[i])
     escreva("Preco de compra: ")
     leia(c[i])
     escreva("Preco de venda: ")
     leia(v[i])
fimpara

para i de 0 ate n-1 faca
     se ((v[i]/c[i]) * 100) < 10 entao
        abaixo = abaixo + 1
     fimse
     se (((v[i]/c[i]) * 100) >= 10) ou (((v[i]/c[i]) * 100) < 20)  entao
        entre <- entre + 1
     senao
          acima <- acima + 1
     fimse
fimpara

para i de 0 ate n-1 faca
     compra <- compra + c[i]
     venda <- venda + v[i]
     lucro <- lucro + (v[i] - c[i])
fimpara
escreval("RELATORIO")
escreval("Lucro abaixo de 10%: ", abaixo)
escreval("Lucro entre 10% e 20%: ", entre)
escreval("Lucro acima de 20%: ", acima)
escreval("Valor total de compra: ", compra)
escreval("Valor total de venda: ", venda)
escreval("Lucro total: ", lucro)


Fimalgoritmo