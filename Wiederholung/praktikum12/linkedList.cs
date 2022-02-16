
class LinkedList
{
    internal class Element
    {
        public int Key { get; set; }
        public Element Next { get; private set; }

        public Element(int key, Element next = null)
        {
            Key = key;
            Next = next;
        }
    }
    private Element head;
    private Element tail;

    public int Size { get; private set; }

    internal class ListIterator : Iterator
    {
        private Element zeiger;

        public ListIterator(Element zeiger)
        {
            this.zeiger = zeiger;
        }

        public bool HasNext()
        {
            return this.zeiger != null;
        }

        public int Next()
        {
            Element temp = zeiger;
            zeiger = zeiger.Next;
            return temp.key;
        }
    }

    public int Add(int key)
    {
        Element neu = new Element(key);
        if (head == null)
        {
            head = tail = neu;
            Size++;
            return 1;
        }
        tail.Next = neu;
        tail = neu;
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
                head = null;
                tail = null;
                Size--;
                return 1;
            }
        }
        else if (i > 0 && i < Size)
        {
            temp = head;
            int count = 0;
            while (count < i)
            {
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
            int count = 0;
            while (count < Size)
            {
                temp = temp.Next;
                count++;
            }
            tail = temp;
            Size--;
            return 1;
        }
        else
        {
            throw new ArgumenNullException("Index is out of range");
        }
    }

}
