#include <iostream>
#ifndef "NODE_H_"

namespace fh_pk2{
struct element{
    const char* text;
    element* prev;//struct kann in c++ entfallen
    element* next;
};
}
#endif