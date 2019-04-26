#pragma once

#include "iterador.hh"



template <typename T, typename K, typename V>
class Diccionario{

    public:

        T& operator[](const K& k);

        int size() const;

        iterador(V) * iterador() const;I


};