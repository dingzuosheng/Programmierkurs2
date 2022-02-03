using System;
namespace ArrayList
{
    public class MainProgramm
    {
        public static void Main(string[] args)
        {
            /*  
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
            */
            ArrayList a = new ArrayList();
            ArrayList b = new ArrayList();

            for (int i = 0; i < 10; i++)
            {
                a.Add(1.0 * i);
            }
            for (int i = 0; i < 20; i++)
            {
                b.Add(2.0 * i);
            }

            ArrayList c = a + b;

            for (int i = 0; i < c.Count; i++)
            {
                Console.WriteLine(c[i]);
            }
        }
    }
}