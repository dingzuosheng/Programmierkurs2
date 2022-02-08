#include <iostream>
#include "rational.h"

rational::rational(int zaehler, int nenner): zaehler{zaehler},nenner{nenner}{}
/*
rational rational::operator*(const rational& r){
    return rational{this->zaehler*r.zaehler,this->nenner*r.nenner};
}
*/

rational::rational(int zaehler): rational{zaehler,1} {}

rational operator*(const rational& l, const rational& r){
   /* rational out;
    out.zaehler = l.zaehler * r.zaehler;
    out.nenner = l.nenner* r.nenner;
    return out;*/
    return rational{l.zaehler*r.zaehler,l.nenner*r.nenner};
}

rational rational::operator*(const int k) const{ //rational * k
    return rational{this->zaehler * k,this->nenner};
}

rational operator*(const int k,const rational& r){
    //return rational{r.zaehler * k, r.nenner};
    return r*k;
}

std::ostream& operator<<(std::ostream& out,const rational& r){
    out << "(" << r.zaehler << "/" << r.nenner << ")";
    return out;
}