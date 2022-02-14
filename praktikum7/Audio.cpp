#include <iostream>
#include "Audio.h"
#include <string>

using namespace std;

Audio::Audio(string titel, int jahr, string interpret, int dauer) : Medium(titel,jahr), interpret{interpret},dauer{dauer}{

}

void Audio::druckeDaten(){
    std::cout << "ID = " << getId() << " \" " << getTitel() << "\" " << " von " << getInterpret() << 
    " aus " << getJahr() << " Spieldauer: " << getDauer() <<  " sek." << std::endl;
}

