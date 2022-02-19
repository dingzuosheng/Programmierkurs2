class Auto
{
    private string hersteller;
    public int Baujahr { get; set; }

    public Auto(string hersteller, int baujahr)
    {
        this.hersteller = hersteller;
        Baujahr = baujahr;
    }

    public string Hersteller
    {
        get
        {
            return hersteller;
        }
        set
        {
            this.hersteller = value;
        }

    }

    public override string ToString()
    {
        return "Dies Auto wurde im Jahr " + Baujahr + "vom " + Hersteller + " hergestellt";
    }
}