#include <iostream>
#include "Bild.h"
#include <string>


Bild::Bild(std::string titel, int jahr, std::string ort):Medium(titel,jahr),ort{ort}{
    
}

void Bild::druckeDaten(){
    std::cout << "ID = " << getId() << " \"" << getTitel() <<  "\" " << " aufgenommen im Jahr" 
    << getJahr() << " in " << getOrt() << std::endl;
}