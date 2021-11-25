#include <iostream>
#include "LinkedList.h"

using namespace std;

void read(const char* t){
    std::cout << t;
} 

int main(){

    LinkedList list = LinkedList();// oder LinkedList list;

    std::cout << "append " <<  list.append("Hallo ") << std::endl;
    std::cout << "append " <<  list.append("Hochschule ") << std::endl;
    std::cout << "append " <<  list.append("Dortmund ") << std::endl;
    std::cout << "append " <<  list.append("Informatik ") << std::endl;
    std::cout << "append " <<  list.append("Fakultaet ") << std::endl;

    std::cout << "insert " <<  list.insert("Fach ",1) << std::endl;
    std::cout << "insert " <<  list.insert("groesste ",1) << std::endl;

    list.visit_all(&read);
    
    std::cout << "" << std::endl;
    std::cout << "get " << list.get(3) << std::endl;
 
    std::cout << "index_of " << list.index_of("Dortmund ") << std::endl;
 
 
    std::cout << "first node " << list.first() << std::endl;
 
    std::cout << "last node " << list.last() << std::endl; 

    std::cout << "remove 10 " << list.remove(10) << std::endl;
    list.visit_all(read);
    std::cout << "" << std::endl;
    
    std::cout << "remove 5 " << list.remove(5) << std::endl; 
    list.visit_all(read);
    std::cout << "" << std::endl;

    std::cout << "remove 2 " << list.remove(2) << std::endl; 
    list.visit_all(read);
    std::cout << "" << std::endl;

    std::cout << "remove 0 " << list.remove(0) << std::endl;
    list.visit_all(read);
    std::cout << "" << std::endl;
    return 0;
}