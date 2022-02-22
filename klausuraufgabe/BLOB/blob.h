
using byte = unsigned char;

class Blob{
    private:
        byte* feld;
        long n;
    public:
        Blob(byte* feld, long n);
        Blob(const Blob& orig);
        ~Blob();
        byte& operator[](long index);
};