#include <iostream>
#include "LinkedList.h"
#include "Audio.h"
#include "Bild.h"
#include "Medium.h"

using namespace std;

void ausgabe(Medium* m){
    m->druckeDaten();
}
void loeschen(Medium* m){
    delete m;
}
// Test der LinkedList-Klasse
int main(){
    using namespace std;
    using namespace fhdo_pk2;

    LinkedList<Medium*> liste;
    Medium* a = new Audio("It means Nothing",2007,"Stereophonics",229);
    Medium* b = new  Bild("Gebaeude FB Informatik",2020,"Dortmund");


    liste.append(a);
    liste.append(b);

    liste.visit_all(ausgabe);
     
    liste.visit_all(loeschen);//Medien loeschen


    liste.remove(0); // element loeschen
    //liste.remove(0);

    liste.visit_all(ausgabe);
    
    return 0;
}