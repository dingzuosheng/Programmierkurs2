#ifndef MEDIUM_H_
#define MEDIUM_H_
#include <iostream>
#include <string>


using namespace std;

class Medium{
    private:
        int id;
        static int counter;
        string titel;
        int jahr;
    public:
        Medium(string titel,int jahr);
        inline int getId() const{
            return id;
        }
        inline string getTitel() const{
            return titel;
        }
        inline int getJahr() const {
            return jahr;
        }
        int alter();
        virtual void druckeDaten() = 0;
};
#endif