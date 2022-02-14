#include <iostream>
#include "Medium.h"
#include <string>

using namespace std;

int Medium::counter = 0;

Medium::Medium(string titel, int jahr) : titel{titel}, jahr{jahr}, id{counter++} {

}

// hier brauchen keine setter Methode, keinen Zugreifen!

int Medium::alter(){
    return 2021-Medium::getJahr();
}
