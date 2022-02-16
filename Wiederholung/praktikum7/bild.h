#include <iostream>
#include <string>
#include "medium.h"
#ifndef "BILD_H_"

using namespace std;

class Bild: public Medium{
    private:
        string ort;

    public:
        Bild(string titel,int jahr,string ort);
        void druckeDaten() override;
};
#endif