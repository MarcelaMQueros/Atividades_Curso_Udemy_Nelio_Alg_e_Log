Algoritmo "troco_verificado"

Var
preco, dinheiro, troco, resto : real
quantidade : inteiro

Inicio
escreva("Preço unitário do produto: ")
leia(preco)
escreva("Quantidade comprada: ")
leia(quantidade)
escreva("Dinheiro recebido: ")
leia(dinheiro)

se dinheiro >= (preco * quantidade) entao
   troco <- dinheiro - proco * quantidade
   escreva("TROCO: ", troco:4:2)
senao
    resto <- preco * quantidade - dinheiro
    escreva("DINHEIRO INSUFICIENTE. FALTAM ", resto:4:2, "reais")
fimse





Fimalgoritmo
