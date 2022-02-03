using System;
namespace ArrayList
{
    public class MainProgramm
    {
        public static void Main(string[] args)
        {
            ArrayList liste = new ArrayList();

            for (int i = 0; i < 100; i++)
            {
                //liste.Add(1.0 * i);
                liste[i] = 1.0 * i;
                Console.WriteLine("Count = {0}, Capacity = {1}", liste.Count, liste.Capacity);
            }
            for (int i = 0; i < 100; i++)
            {
                //Console.WriteLine(liste.Get(i));
                Console.WriteLine(liste[i]);
            }
        }
    }
}