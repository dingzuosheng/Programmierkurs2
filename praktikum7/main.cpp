#include "Medium.h"
#include "Audio.h"
#include "Bild.h"

int main(){
    Medium* medien[2];

    Audio a = Audio("It Means Nothing", 2007,"Stereophonics",229); // auf static stack gespeichert, wenn Main fertig ausgefuerht wurde, dann ist die Variable  auch weg.
    //Audio a = Audio("It Means Nothing", 2007,"Stereophonics",229);  in heap fest gespeichert, muss mit delete aufräumen
    Bild b = Bild("Gebaeude FB Informatik", 2020,"Dortmund");
 
    medien[0] = &a; 
    medien[1] = &b;
    
    a.druckeDaten();
    b.druckeDaten();

    return 0;
}