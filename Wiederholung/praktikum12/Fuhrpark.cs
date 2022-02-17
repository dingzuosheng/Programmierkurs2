class Fuhrpark
{
    private LinkedList<Auto> liste;

    public event EventHandler<FuhrparkEventArgs> AutoAddedEvent;
    public event EventHandler<FuhrparkEventArgs> AutoRemovedEvent;

    public Fuhrpark()
    {
        liste = new LinkedList<Auto>();
    }

    public void Aufnehmen(Auto a)
    {
        liste.Add(a);
        OnAutoAddedEvent(a);
    }

    public void Remove(int i)
    {
        liste.Remove(i);
        OnAutoRemovedEvent(i);
    }

    public void Inventur()
    {
        Iterator<Auto> it = liste.Iterator();
        while (it.hasNext())
        {
            Console.WriteLine(it.Next().ToString());
        }
    }

    public double BerechneFlottenAlter()
    {
        Iterator<Auto> it = liste.Iterator();
        double gesamt = 0.0;
        while (it.hasNext())
        {
            gesamt += (2022 - it.Next().Baujahr);
        }
        return gesamt / liste.Size;
    }

    protected virtual void OnAutoAddedEvent(Auto a)
    {
        if (AutoAddedEvent != null)
        {
            FuhrparkEventArgs fuhrparkEventArgs = new FuhrparkEventArgs(a);
            AutoAddedEvent(this, fuhrparkEventArgs);
        }
    }

    protected virtual void OnAutoRemovedEvent(int i)
    {
        if (AutoRemovedEvent != null)
        {
            FuhrparkEventArgs fuhrparkEventArgs = new FuhrparkEventArgs(i);
            AutoRemovedEvent(this, fuhrparkEventArgs);
        }
    }

}