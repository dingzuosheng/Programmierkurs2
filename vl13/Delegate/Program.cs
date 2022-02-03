namespace Delegate
{
    public class MainProgramm
    {
        delegate int Calc(int a, int b);

        public static int Summe(int a, int b)
        {
            return a + b;
        }

        public static int Produkt(int x, int y)
        {
            return x * y;
        }
        public static void Main(string[] args)
        {
            Calc c = new Calc(Summe);

            Console.WriteLine("100 + 10 = {0}", c(100, 10));

            c = Produkt;

            Console.WriteLine("100 * 15 = {0}", c(100, 15));

            c = delegate (int a, int b)
            {
                return a - b;
            };

            Console.WriteLine("100 - 10 = {0}", c(100, 10));

            c = (int a, int b) => a / b; // c = (a, b) => a / b;

            Console.WriteLine("100 / 10 = {0}", c(100, 10));
        }
    }
}