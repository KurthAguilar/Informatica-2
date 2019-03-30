#include "Cuadrado.hh"

std::vector<Pixel> Cuadrado::esquinas() const{
    return{
        {1,1},
        {4,1},
        {4,4},
        {1,4}

    };
}