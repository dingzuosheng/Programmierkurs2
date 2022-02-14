#ifndef _AUDIO_H
#define _AUDIO_H
#include "Medium.h"
#include <iostream>

using namespace std;

class Audio : public Medium {
    private:
        string interpret;
        int dauer;
    public:
        Audio(string titel, int jahr, string interpret,int dauer);
        inline string getInterpret() const {
            return interpret;
        }
        inline int getDauer() const { 
            return dauer;
        }
        void druckeDaten() override;// override darf nur in der Klassendeklaration verwendet werden
};
#endif