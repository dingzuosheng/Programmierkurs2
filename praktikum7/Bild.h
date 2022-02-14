#ifndef _BILD_H
#define _BILD_H
#include "Medium.h"
#include <iostream>

using namespace std;

class Bild : public Medium {
    private:
        string ort;
    public:
        Bild(string titel, int jahr, string ort);
        // hier keine Setter Methode, weil kein Zugreifen sondern nur auslesen.
        inline string getOrt() const{ 
            return ort;
        }
        void druckeDaten() override;
};
#endif
