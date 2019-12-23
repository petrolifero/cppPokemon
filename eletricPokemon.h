#include <iostream>

#include "pokemon.h"

class EletricPokemon : public Pokemon
{
    private:
        float eletricEffectivePower;
    public:
        EletricPokemon(float eletricEffectivePower,int hp);
        std::string thunderWave();
};
