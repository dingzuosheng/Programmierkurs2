class Blob{
    private:
        unsigned char* feld;
        long n;
    public:
        Blob(unsigned char* feld, long n);
        Blob(const Blob& orig);
        ~Blob();
        unsigned char& operator[](long index);
        void operator[](long index);
};