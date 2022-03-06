#include "mat.hpp"
#include <stdexcept>

using namespace std;

namespace ariel{
    std::string mat(int a, int b, char c, char d)
    {
        static const char min_sign = ' ';
        static const char max_sign = '~';
        if(a%2==0 || b%2==0){throw runtime_error ("Mat size is always odd") ;}
        if(a<1 || b<1){throw runtime_error ("error input negative numbers");}
        return "this function works";
    }
}
