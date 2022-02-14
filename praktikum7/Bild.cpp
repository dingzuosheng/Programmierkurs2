#include <iostream>
#include "Bild.h"
#include <string>
#include <iostream>

using namespace std;

Bild::Bild(string titel, int jahr, string ort):Medium(titel,jahr),ort{ort}{
    
}

void Bild::druckeDaten(){
    std::cout << "ID = " << getId() << " \"" << getTitel() <<  "\" " << " aufgenommen im Jahr" 
    << getJahr() << " in " << getOrt() << std::endl;
}