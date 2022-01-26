class Hauptprogramm
{
    public static void Main(string[] args)
    {

        Auto auto1 = new Auto("Volkswagen", 2008);
        Auto auto2 = new Auto("BMW", 2012);

        Fuhrpark fuhrpark = new Fuhrpark();

        Info info = new Info(fuhrpark);

        fuhrpark.Aufnehmen(auto1);
        fuhrpark.Aufnehmen(auto2);

        fuhrpark.Inventur();

        Console.WriteLine("Der durchschnittalter von den Autos in der Fuhrpark ist: " + fuhrpark.BerechneFloattenalter());

        fuhrpark.Remove(1);

    }
}