using System;
using System.Globalization;


namespace Diagonalnegativos {
    class Diagonalnegativos {
        static void Main(String[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int n, cont;
            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] matriz = new int[n,n];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++){
                    Console.Write($"Elemento [{i},{j}]: ");
                    matriz[i,j] = int.Parse(Console.ReadLine());
                }
            }
            cont = 0;
            Console.WriteLine("DIAGONAL PRINCIPAL: ");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++){
                    if (i == j) {
                        Console.Write($"{matriz[i,j]} ");
                    }
                    if (matriz[i,j] < 0) {
                        cont++;
                    }
                }
            }

            Console.Write($"\nQUANTIDADE DE NEGATIVOS = {cont}");
        }
    }
}