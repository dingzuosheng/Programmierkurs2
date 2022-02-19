using System;
class Programm
{
    public static void Main(string[] args)
    {
        Rational a = new Rational(2, 4);
        Rational b = new Rational(9, 5);
        Rational c = a * b;
        Console.WriteLine("{0} * {1} = {2}", a, b, c);
    }
}