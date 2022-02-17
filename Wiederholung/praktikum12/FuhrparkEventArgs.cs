class FuhrparkEventArgs : EventArgs
{
    public Auto Auto { get; set; }
    public int Index { get; set; }

    public FuhrparkEventArgs(Auto a)
    {
        Auto = a;
    }

    public FuhrparkEventArgs(int i)
    {
        Index = i;
    }

}