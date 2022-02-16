using System;
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
        private set
        {
            this.hersteller = value;
        }
    }

    public string ToString()
    {
        return "Dies Auto wurde im Jahr " + Baujahr + " vom Hersteller " + Hersteller + " hergestellt";
    }
}