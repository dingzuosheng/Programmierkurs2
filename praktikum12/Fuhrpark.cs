class Fuhrpark
{
    private LinkedList<Auto> liste;

    public Fuhrpark()
    {
        liste = new LinkedList<Auto>();
    }
    public void Aufnehmen(Auto a)
    {
        liste.Add(a);
    }
    public void Inventur()
    {
        Iterator<Auto> iterator = liste.iterator();
        while (iterator.HasNext())
        {
            Console.WriteLine(iterator.Next().ToString());
        }
    }

    public double BerechneFloattenalter()
    {
        double summe = 0.0;
        Iterator<Auto> iterator = liste.iterator();
        while (iterator.HasNext())
        {
            summe += (2022 - iterator.Next().Baujahr);
        }
        return summe / liste.Size;
    }
}