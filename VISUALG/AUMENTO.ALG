Algoritmo "aumento"

Var
salario, novosalario, aumento, porcentagem : real


Inicio

escreva("Digite o salario da pessoa: ")
leia(salario)

se salario <= 1000.00 entao
   porcentagem <- 20
   senao
   se salario <= 3000.00 entao
       porcentagem <- 15
       senao
       se salario <= 8000.00 entao
          porcentagem <- 10
          senao
               porcentagem <- 5
       fimse
   fimse
   
fimse

aumento <- salario * porcentagem / 100
novosalario <- aumento + salario
escreval("Novo salario: RS ", novosalario:4:2)
escreval("aumento: ", aumento:4:2)
escreval("porcentagem: ", porcentagem, "%")

Fimalgoritmo