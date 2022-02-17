class LinkedList<T>
{
    internal class Element
    {
        public T Key { get; set; }
        public Element Next { get; set; }

        public Element(T key, Element next = null)
        {
            Key = key;
            Next = next;
        }

    }

    private Element head;
    private Element tail;

    public int Size { get; private set; }

    public T this[int index]
    {
        get
        {
            if (index < 0 || index > Size)
            {
                throw new IndexOutOfRangeException("Index Error");
            }
            else
            {
                Element temp = head;
                int i = 0;
                while (i < index)
                {
                    temp = temp.Next;
                    i++;
                }
                return temp.Key;
            }
        }
        set
        {
            if (index < 0)
            {
                throw new IndexOutOfRangeException("Index Error");
            }
            else if (index == 0)
            {
                Element neu = new Element(value);
                if (head == null)
                {
                    head = tail = neu;
                }
                else
                {
                    neu.Next = head;
                    head = neu;
                }
                Size++;
            }
            else if (index > 0 && index < Size)
            {
                int count = 1;
                Element temp = head;
                while (count < index)
                {
                    temp = temp.Next;
                    count++;
                }
                temp.Key = value;
            }
            else
            {
                Element neu = new Element(value);
                tail.Next = neu;
                tail = neu;
                Size++;
            }
        }
    }


    internal class ListIterator : Iterator<T>
    {
        private Element zeiger;
        public ListIterator(Element zeiger)
        {
            this.zeiger = zeiger;
        }
        public bool hasNext()
        {
            return this.zeiger != null;
        }

        public T Next()
        {
            Element temp = zeiger;
            zeiger = zeiger.Next;
            return temp.Key;
        }
    }

    public int Add(T key)
    {
        Element neu = new Element(key);
        if (head == null)
        {
            head = tail = neu;
            Size++;
            return 1;
        }
        tail.Next = neu;
        Size++;
        return 1;
    }

    public int Remove(int i)
    {
        if (Size == 0) return 0;
        Element temp;
        if (i == 0)
        {
            if (head.Next != null)
            {
                head = head.Next;
                Size--;
                return 1;
            }
            else
            {
                head = tail = null;
                Size--;
                return 1;
            }
        }
        else if (i > 0 && i < Size)
        {
            temp = head;
            int count = 0;
            while (count < i)
            { // [0][1][2][3][4] i=3,size=5, stop at [2], temp = [2], delete [3]
                temp = temp.Next;
                count++;
            }
            temp.Next = temp.Next.Next;
            Size--;
            return 1;
        }
        else if (i >= Size)
        {
            temp = head;
            int count = 1;
            while (count < Size)
            {
                temp = temp.Next;
                count++;
            }
            tail = temp;
            Size--; ;
            return 1;
        }
        else
        {
            throw new ArgumentNullException("Error: Index is out of range");
        }
    }

    public ListIterator Iterator()
    {
        ListIterator it = new ListIterator(head);
        return it;
    }

}