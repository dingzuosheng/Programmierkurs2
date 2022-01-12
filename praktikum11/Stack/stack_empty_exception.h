#include <stdexcept>
#include <string>

class stack_empty_exception: public std::out_of_range {
    public:
        stack_empty_exception(std::string message): out_of_range(message){
        };
};