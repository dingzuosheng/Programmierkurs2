#ifndef _MEDIUM_H
#define _MEDIUM_H
#include <string>
#include <iostream>

class Medium{
    private:
        int id;
        static int counter;
        std::string titel;
        int jahr;
    public:
        Medium(std::string titel, int jahr);
        inline int getId() const {
            return id;
        }
        inline std::string getTitel() const {
            return titel;
        } 
        inline int getJahr() const {
            return jahr;
        }
        int alter();
        virtual void druckeDaten() = 0; // wenn gleich 0, dann keine Implementierung in .cpp Datei
};
#endif