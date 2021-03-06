#include <iostream>

class rational{
    private:
        int zaehler;
        int nenner;
    public:
        rational(int zaehler,int nenner);
        //rational operator*(const rational& r); // hier als ein Elementfunktion
        explicit rational(int zaehler);
        rational operator*(const int k) const; // rational * k
        friend std::ostream& operator<<(std::ostream& out, const rational& r);// mit friend ist die immer eine globale Funktion
        friend rational operator*(const rational& l,const rational& r);
        friend rational operator*(const int k,const rational& r); // rational * k
};