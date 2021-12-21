#include <iostream>
#include "Medium.h"
#include <string>


int Medium::counter = 0;

Medium::Medium(std::string titel, int jahr) : titel{titel}, jahr{jahr}, id{counter++} {

}

// hier brauchen keine setter Methode, keinen Zugreifen!

int Medium::alter(){
    return 2021-Medium::getJahr();
}
