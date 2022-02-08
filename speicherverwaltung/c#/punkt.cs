struct PunktS{
    private double x;
    private double y;

    PunktS(double x, double y){
        this.x = x;
        this.y = y;
    }

    public double getX() {return x;}

    public double getY() {return y;}

}

class Programm{
    public static void Main(string[] args){
        PunktS s1 ;// s1 wurde nur im Stack definiert, hat keine Referenzwert
        PunktS s2 = new PunktS(10.0,20.0); // Struct in C# ist nicht wie class, hat auch keine Referenzwert wie class, deshalb wurde nur im Stack definiert.

        Console.WriteLine("({0},{1})",s2.getX(),s2.getY());
    }
}