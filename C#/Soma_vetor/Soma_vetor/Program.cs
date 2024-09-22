using System;
using System.Globalization;


namespace Somavetor {
    class Somavetor {
        static void Main(String[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int n;
            double soma, media;
            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            double[] vet = new double[n];

            for (int i = 0; i < n; i++) {
                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            }
            soma = 0;
            Console.Write("Valores = ");
            for (int i = 0; i < n; i++) {
                Console.Write($"{vet[i].ToString("F1", CI)} ");
                soma += vet[i];
            }
            media = soma / n;
            Console.Write($"\nSOMA = {soma.ToString("F1", CI)}\nMEDIA = {media.ToString("F1", CI)}");
        }
    }
}