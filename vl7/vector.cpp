#include <iostream>
#include "vector.h"

Vector::Vector(int size): size{size},feld{new double[size]} {}

bool Vector::index_is_ok(int index) const{
    return ((index >= 0) && (index < size));
}

Vector::Vector(const Vector& orig): Vector{orig.size} {
    for(int i = 0; i < size; i++){
        feld[i] = orig.feld[i];
    }
}

Vector::~Vector(){
    delete[] feld;
    std::cout << "Destructor Vector" << std::endl;
}

void Vector::set(int index, double key){
    if(index_is_ok(index)){
        feld[index] = key;
    }else{
        //ToDo throw exception
        std::cout << "Error: Index out of range" << std::endl;
    }
}

double Vector::get(int index) const{
    if(index_is_ok(index)){
        return feld[index];
    }else{
        //ToDo throw exception
        std::cout << "Error: Index out of range" << std::endl;
        return -1;
    }
}