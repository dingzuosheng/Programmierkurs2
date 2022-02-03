using System;
namespace ArrayList
{
    public class ArrayList
    {
        private double[] feld;
        public int Capacity { get; private set; }
        public int Count { get; private set; }

        public ArrayList()
        {
            Capacity = 1;
            feld = new double[Capacity];
            Count = 0;
        }
        private void Resize(int size)
        {
            double[] neu = new double[size];
            for (int i = 0; i < Count; i++)
            {
                neu[i] = feld[i];
            }
            feld = neu;
            Capacity = size;
        }
        public void Insert(int pos, double key)
        {
            if (pos < 0 || pos > Count)
            {
                throw new Exception("Index out of range !");
            }
            if (pos == Capacity)
            {
                Resize(2 * Capacity);
            }
            if (pos == Count)
            {
                Count++;
            }
            feld[pos] = key;//warum hier count nicht um 1 erhöhen? weil das ist nicht eine LinkedList, 
                            //wenn in der Mittel der List eine Zahl hinzugefügt wird, die originale Zahl wird nur überschrieben. 
        }

        public void Add(double key)
        {
            Insert(Count, key);
        }

        public double Get(int pos)
        {
            if (pos < 0 || pos > Count)
            {
                throw new Exception("Index-Error");
            }
            return feld[pos];
        }
    }
}