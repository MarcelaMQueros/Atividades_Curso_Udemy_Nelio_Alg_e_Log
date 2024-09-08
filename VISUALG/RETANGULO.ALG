Algoritmo "Retangulo"

Var
base, altura, area, perimetro, diagonal : real


Inicio
      escreval("Digite a Base do retangulo: ")
      leia(base)
      escreval("Digite a Altura do retangulo: ")
      leia(altura)
      
      area <- base * altura
      perimetro <- (base * 2) + (altura * 2)
      diagonal <- RaizQ(Exp(base,2) + Exp(altura,2))

      escreval("AREA = ", area:2:4)
      escreval("PERIMETRO = ", perimetro:2:4)
      escreval("DIAGONAL = ", diagonal:2:4)
Fimalgoritmo