using System;
namespace ArrayList
{
    public partial class ArrayList
    {
        private int[] feld;
        public int Count { get; private set; }

        public int Capacity { get; private set; }

        public ArrayList()
        {
            Capacity = 1;
            feld = new int[Capacity];
            Count = 0;
        }

        public void Add(int key)
        {
            Insert(Count, key);
        }

        public void Resize(int size)
        {
            int[] neu = new int[size];
            for (int i = 0; i < Count; i++)
            {
                feld[i] = neu[i];
            }
            feld = neu;
            Capacity = size;
        }
        public void Insert(int pos, int key)
        {
            if (pos < 0 || pos > Count)
            {
                throw new Exception("Index Error");
            }
            if (pos == Count)
            {
                Count++;
            }
            if (pos == Capacity)
            {
                Resize(2 * Capacity);
            }
            feld[pos] = key;
        }

        public int Get(int pos)
        {
            if (pos < 0 || pos > Count)
            {
                throw new Exception("Index Error");
            }
            return feld[pos];
        }
    }
}