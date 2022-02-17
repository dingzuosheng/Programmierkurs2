class Info
{
    private Fuhrpark Fuhrpark { get; set; }

    public Info(Fuhrpark fuhrpark)
    {
        fuhrpark.AutoAddedEvent += Ausgabe;
    }

    public void Ausgabe(Object sender, FuhrparkEventArgs args)
    {
        Console.WriteLine("Info des neuen aufgenommenen Autos: Baujahr {0}, Hersteller {1}", args.Auto.Baujahr, args.Auto.Hersteller);
    }
}