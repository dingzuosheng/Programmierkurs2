struct element{
    const char* text;
    element* prev;//struct kann in c++ entfallen
    element* next;
};

class LinkedList{
    private:
        element* start;
        element* end;
        int size;
    public:
        LinkedList();
        int append(const char* text);
        int insert(const char* text, int p);
        int remove(int p);
        const char* get(int p);
        int index_of(const char* text);
        const char* first();
        const char* last();
        void visit_all(void (*work)(const char* t));
};