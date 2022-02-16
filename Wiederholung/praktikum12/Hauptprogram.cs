using System;
class Hauptprogram
{
    public static void Main(string[] args)
    {
        Auto auto1 = new Auto("BMW", 2007);
        Auto auto2 = new Auto("Volkswagen", 2013);


        Fuhrpark fuhrpark = new Fuhrpark();

        fuhrpark.Aufnehmen(auto1);
        fuhrpark.Aufnehmen(auto2);

        fuhrpark.Inventur();

        Console.WriteLine("Das Durchschnittflottenalter ist: " + fuhrpark.BerechneFlottenAlter());
    }
}