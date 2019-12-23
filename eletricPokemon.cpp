#include "eletricPokemon.h"

#include <sstream>


EletricPokemon::EletricPokemon(float eletricEffectivePower,int hp) : Pokemon(hp)
{
    this->eletricEffectivePower=eletricEffectivePower;
}

std::string EletricPokemon::thunderWave()
{
    std::ostringstream out;
    out << "I attack with thunderWave with " << this->eletricEffectivePower <<
        " of power" << std::endl;
    return out.str();
}
