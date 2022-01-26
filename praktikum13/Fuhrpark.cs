//delegate void fuhrparkDelegate(object sender, FuhrparkEventArgs args);// nach Konvention immer 2 Parameter
class Fuhrpark
{
    private LinkedList<Auto> liste;

    //delegate void EventHandler<T>(object sender, T args) where T : EventArgs; 

    public event EventHandler<FuhrparkEventArgs> AutoAddedEvent;//
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