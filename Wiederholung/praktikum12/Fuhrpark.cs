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
        Iterator<Auto> it = liste.Iterator();
        while (it.hasNext())
        {
            console.writeLine(it.Next().ToString());
        }
    }

    public double BerechneFlottenAlter()
    {
        Iterator<Auto> it = liste.Iterator();
        double gesamt = 0.0;
        while (it.hasNext)
        {
            gesamt += (2022 - it.Next().Baujahr);
        }
        return gesamt / liste.Size;
    }

}