using System;
namespace ArrayList
{
    public partial class ArrayList
    {
        public int this[int index]
        {
            get
            {
                return Get(index);
            }
            set
            {
                Insert(index, value);
            }
        }

        public static ArrayList operator +(ArrayList l, ArrayList r)
        {
            ArrayList neu = new ArrayList();
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