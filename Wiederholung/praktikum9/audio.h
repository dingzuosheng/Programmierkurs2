#ifndef  AUDIO_H_
#define  AUDIO_H_
#include <iostream>
#include <string>
#include "medium.h"


using namespace std;

class Audio : public Medium {
    private:
        string interpret;
        int dauer;
    public:
        Audio(string titel,int jahr,string interpret,int dauer);
        inline string getInterpret() const {
            return interpret;
        }
        inline int getDauer() const {
            return dauer;
        }
        void druckeDaten() override;
};
#endif