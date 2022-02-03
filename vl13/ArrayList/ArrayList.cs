using System;
namespace ArrayList
{
    public class ArrayList<T>
    {
        private T[] feld;
        public int Capacity { get; private set; }
        public int Count { get; private set; }

        public T this[int pos]
        {
            set
            {
                Insert(pos, value);
            }
            get
            {
                return Get(pos);
            }
        }

        public ArrayList()
        {
            Capacity = 1;
            feld = new T[Capacity];
            Count = 0;
        }
        private void Resize(int size)
        {
            T[] neu = new T[size];
            for (int i = 0; i < Count; i++)
            {
                neu[i] = feld[i];
            }
            feld = neu;
            Capacity = size;
        }
        public void Insert(int pos, T key)
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

        public void Add(T key)
        {
            Insert(Count, key);
        }

        public T Get(int pos)
        {
            if (pos < 0 || pos > Count)
            {
                throw new Exception("Index-Error");
            }
            return feld[pos];
        }

        public static ArrayList<T> operator +(ArrayList<T> l, ArrayList<T> r)
        {
            ArrayList<T> neu = new ArrayList<T>();
            for (int i = 0; i < l.Count; i++)
            {
                neu.Add(l[i]);
            }
            for (int i = 0; i < r.Count; i++)
            {
                neu.Add(r[i]);
            }
            return neu;
        }
    }
}