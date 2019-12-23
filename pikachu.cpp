#include "Pikachu.h"

Pikachu::Pikachu(std::string name): EletricPokemon(5.6,100)
{
    this->name=name;
}

std::string Pikachu::speak()
{
    return "Pika pika";
}

