using System;
using System.Globalization;


namespace Retangulo {
    class Retangulo {
        static void Main(String[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double base_retangulo, altura, area, perimetro, diagonal;
            Console.Write("BASE DO RETANGULO: ");
            base_retangulo = double.Parse(Console.ReadLine(), CI);
            Console.Write("ALTURA DO RETANGULO: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = base_retangulo * altura;
            perimetro = 2 * (base_retangulo + altura);
            diagonal = Math.Sqrt(Math.Pow(base_retangulo,2.0) + Math.Pow(altura, 2.0));

            Console.Write($"AREA = {area.ToString("F4", CI)} \nPERIMETRO = {perimetro.ToString("F4", CI)} \nDIAGONAL = {diagonal.ToString("F4", CI)}");


        }
    }
}