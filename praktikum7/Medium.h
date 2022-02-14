#ifndef _MEDIUM_H
#define _MEDIUM_H
#include <string>
#include <iostream>

using namespace std;

class Medium{
    private:
        int id;
        static int counter;
        string titel;
        int jahr;
    public:
        Medium(string titel, int jahr);
        virtual ~Medium() {} // hier reicht mit einem virtuellen Destruktor, sonst default Destruktor
        inline int getId() const {
            return id;
        }
        inline string getTitel() const {
            return titel;
        } 
        inline int getJahr() const {
            return jahr;
        }
        int alter();
        virtual void druckeDaten() = 0; // wenn gleich 0, dann keine Implementierung in .cpp Datei
};
#endif