class LinkedList<T>
{
    internal class Node//kann auch private sein
    {
        public T Data { get; set; }
        public Node Next { get; set; }

        public Node(T data, Node next = null)// in c# kann in dem Konstruktor einen default Wert schreiben
        {
            Data = data;
            Next = next;
        }

    }
    private Node head;//kann auch internal sein, ? hinter Node  kann ein Feld als nullable definieren
    private Node tail;//kann auch internal sein
    public int Size { get; private set; }
    internal class ListIterator : Iterator<T>
    {
        private Node? zeiger; // zeiger sollte private sein
        public ListIterator(Node zeiger)
        {
            this.zeiger = zeiger;
        }

        public bool HasNext()
        {
            return this.zeiger != null;
        }

        public T Next()
        {
            Node tmp = zeiger;
            zeiger = zeiger.Next;
            return tmp.Data;
        }
    }

    // konstruktor default standard, attribute werden mit standard Werten initialisiert.

    public ListIterator iterator()
    {
        return new ListIterator(head);
    }

    public void Add(T data)
    {
        Node neu = new Node(data);
        if (head == null)
        {
            head = tail = neu;
            Size++;
        }
        else
        {
            tail.Next = neu;
            tail = neu;
            Size++;
        }
    }

    public int Remove(int i)
    {
        Node tmp;
        if (Size == 0) { return 0; }
        if (i == 0)
        {

            if (head.Next != null)
            {
                head = head.Next;// head wird automatisch geloescht
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
            tmp = head;
            int count = 0;
            while (count < i)
            {
                tmp = tmp.Next;
                count++;
            }
            if (tmp.Next == null)
            {
                tmp = null;
                Size--;
                return 1;
            }
            else
            {
                if (tmp.Next != null)
                {
                    if (tmp.Next.Next != null)
                    {
                        tmp.Next = tmp.Next.Next;
                        Size--;
                        return 1;
                    }
                    else
                    {
                        tmp.Next = null;
                        Size--;
                        return 1;
                    }
                }
                tmp = null;
                Size--;
                return 1;
            }
        }
        else if (i >= Size)
        {
            tmp = head;
            int count = 1;
            while (count < Size)
            {
                tmp = tmp.Next;
                count++;
            }
            tail = tmp;
            Size--;
            return 1;
        }
        else
        {
            throw new ArgumentNullException("Error: Index ist negativ");
        }

    }
}