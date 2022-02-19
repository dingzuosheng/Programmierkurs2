class Rational
{
    public int Zaehler { get; set; }
    public int Nenner { get; set; }

    public Rational(int zaehler, int nenner)
    {
        Zaehler = zaehler;
        Nenner = nenner;
    }

    public override string ToString()
    {
        return "(" + Zaehler + "/" + Nenner + ")";
    }
    public static Rational operator *(Rational l, Rational r)
    {
        if (l.Nenner != 0 && r.Nenner != 0)
        {
            Rational neu = new Rational(0, 0);
            neu.Zaehler = l.Zaehler * r.Zaehler;
            neu.Nenner = l.Nenner * r.Nenner;
            return neu;
        }
        else
        {
            throw new Exception("Error: Nenner ist null");
        }
    }
}