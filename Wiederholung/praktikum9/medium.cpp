#include <iostream>
#include <string>
#include "medium.h"

using namespace std;

int Medium::counter = 0;

Medium::Medium(string titel,int jahr): titel{titel}, jahr{jahr}, id{counter++} {}

int Medium::alter(){
    return 2022-getJahr();
}
