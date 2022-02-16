#include <iostream>
#include "linkedList.h"
#include "listIterator.h"
#include "node.h"
#include "medium.h"
#include "audio.h"
#include "bild.h"

using namespace fh_pk2;

void ausgabe(Medium* m){
    m->druckeDaten();
}

int main(){
    LinkedList<Medium*> liste1;

    Medium* a = new Audio("It means Nothing",2007,"Stereophonics",229);
    Medium* b = new Bild("Gebaeude FB Informatik",2020,"Dortmund");
    liste1.append(a);
    liste1.append(b);
    liste1.visit_all(&ausgabe);

    liste1.remove(0);
    liste1.visit_all(ausgabe);
    return 0;
}