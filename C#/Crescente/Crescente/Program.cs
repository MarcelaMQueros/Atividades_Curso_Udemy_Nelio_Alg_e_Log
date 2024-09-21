using System;
using System.Globalization;


namespace Crescente {
    class Crescente {
        static void Main(String[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int num1, num2;

            do {
                Console.WriteLine("Digite dois numeros: ");
                num1 = int.Parse(Console.ReadLine());
                num2 = int.Parse(Console.ReadLine());

                string resultado = (num1 < num2) ? "CRESCENTE!" : "DECRESCENTE!";
                Console.WriteLine(resultado);
            } while (num1 != num2);
        }
    }
}