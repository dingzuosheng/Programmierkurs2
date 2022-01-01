#include <iostream>


class rational{
    private:
        int zaehler;
        int nenner;

    public:
        rational(int zaehler,int nenner);
        //rational operator*(const rational& r);
        friend std::ostream& operator<<(std::ostream& out, const rational& r);
        friend rational operator*(const rational& l, const rational& r);
};