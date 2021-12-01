#include <iostream>
#include "Audio.h"
#include <string>

Audio::Audio(std::string titel, int jahr, std::string interpret, int dauer) : Medium(titel,jahr), interpret{interpret},dauer{dauer}{

}

void Audio::druckeDaten(){
    std::cout << "ID = " << getId() << " \" " << getTitel() << "\" " << " von " << getInterpret() << 
    " aus " << getJahr() << " Spieldauer: " << getDauer() <<  " sek." << std::endl;
}

