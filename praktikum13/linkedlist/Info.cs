class Info
{
    public Info(Fuhrpark fuhrpark)
    {
        fuhrpark.AutoAddedEvent += Ausgabe;
    }
    public void Ausgabe(object? sender, FuhrparkEventArgs args)
    {
        Console.WriteLine("Info des neu aufgenommenen Auto: Baujahr = {0}, Hersteller = {1}", args.Auto.Baujahr, args.Auto.Hersteller);
    }
}