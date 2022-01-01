using System;

class HelloCsharp
{
    public static void Main(String[] args)
    {
        string[] jahreszeiten = new string[] { "Frühling", "Sommer", "Herbst", "Winter" };
        foreach (string text in jahreszeiten)
        {
            System.Console.WriteLine(text);
        }
        Console.WriteLine("Hello I am hier!");
    }
}