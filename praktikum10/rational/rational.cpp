#include "rational.h"

rational::rational(int zaehler, int nenner):zaehler{zaehler},nenner{nenner}{}
/*
rational rational::operator*(const rational& r){
    return rational{zaehler * r.zaehler, nenner * r.nenner};
}
*/
rational operator*(const rational& l, const rational& r){
    return rational{l.zaehler*r.zaehler,l.nenner*r.nenner};
}
std::ostream& operator<<(std::ostream& out, const rational& r){
    out <<"(" << r.zaehler << "/" << r.nenner << ")";
    return out;
}