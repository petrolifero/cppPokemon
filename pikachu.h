#include <iostream>
#include <string>

#include "eletricPokemon.h"

class Pikachu : public EletricPokemon
{
    std::string name;
    public:
    Pikachu(std::string name) ;
    std::string speak();
};

