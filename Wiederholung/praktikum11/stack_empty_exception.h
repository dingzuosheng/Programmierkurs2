#include <stdexcept>
#include <string>

using namespace std;

class Stack_empty_exception : public exception{
    public:
        Stack_empty_exception(string info) : public out_of_range(info){

        };

};