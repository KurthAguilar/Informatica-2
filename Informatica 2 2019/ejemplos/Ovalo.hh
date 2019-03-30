#pragma once

#include<vector>
#include "Figura.hh"

class Ovalo : Figura{
    public:
    Ovalo(int _a, int _b): a(_a), b(_b){};
    virtual std::vector<Pixel> render() const override;
    
    int a;
    int b;
 
};
