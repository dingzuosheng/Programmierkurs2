#ifndef _BILD_H
#define _BILD_H
#include "Medium.h"

class Bild : public Medium {
    private:
        std::string ort;
    public:
        Bild(std::string titel, int jahr, std::string ort);
        // hier keine Setter Methode, weil kein Zugreifen sondern nur auslesen.
        inline std::string getOrt() const{ 
            return ort;
        }
        void druckeDaten() override;
};
#endif
