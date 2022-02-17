using System;
class Hauptprogram
{
    public static void Main(string[] args)
    {
        Auto auto1 = new Auto("BMW", 2007);
        Auto auto2 = new Auto("Volkswagen", 2013);


        Fuhrpark fuhrpark = new Fuhrpark();

        Info info = new Info(fuhrpark);

        fuhrpark.Aufnehmen(auto1);
        fuhrpark.Aufnehmen(auto2);

        fuhrpark.Inventur();

        Console.WriteLine("Das Durchschnittflottenalter ist: " + fuhrpark.BerechneFlottenAlter());

        fuhrpark.Remove(0);
        /* LinkedList<Auto> liste = new LinkedList<Auto>();
         liste[liste.Size] = new Auto("Audi", 2021);
         liste[liste.Size] = new Auto("Tesla", 2021);
         for (int i = 0; i < liste.Size; i++)
         {
             liste[i].DruckeDaten();
         }*/

    }
}