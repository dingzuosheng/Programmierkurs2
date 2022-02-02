class Vector{
    private:
        int size;
        double  *feld;
        bool index_is_ok(int index) const;
    public:
        Vector(int size);
        Vector(const Vector& orig);
        ~Vector();
        void set(int index, double key);
        double get(int index) const;
};