#include <iostream>
#include "rational.h"

rational::rational(int zaehler, int nenner): zaehler{zaehler},nenner{nenner}{}
/*
rational rational::operator*(const rational& r){
    return rational{this->zaehler*r.zaehler,this->nenner*r.nenner};
}
*/

rational operator*(const rational& l, const rational& r){
   /* rational out;
    out.zaehler = l.zaehler * r.zaehler;
    out.nenner = l.nenner* r.nenner;
    return out;*/
    return rational{l.zaehler*r.zaehler,l.nenner*r.nenner};
}

std::ostream& operator<<(std::ostream& out,const rational& r){
    out << "(" << r.zaehler << "/" << r.nenner << ")";
    return out;
}