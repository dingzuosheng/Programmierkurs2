class PunktK
{
    private double x;
    private double y;

    PunktK(double x, double y)
    {
        this.x = x;
        this.y = y;
    }

    public double getX() { return x; }

    public double getY() { return y; }

}

class Programm
{
    public static void Main(string[] args)
    {
        PunktK p1;
        PunktK p2;
        p1 = new PunktK(10.5, 100.5);
        p2 = p1;

        Console.WriteLine("({0},{1})", p2.getX(), p2.getY());
        p1 = null;
        p2 = null;
    }
}