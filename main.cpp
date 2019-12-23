#include <iostream>
#include <string>

#include "Pikachu.h"

int main(int argc, char* argv[])
{
    int x;
    int y;
    std::string pokemonName;
    std::cout << "Tell me the name of your first Pokemon : ";
    std::cin >> pokemonName;
    Pikachu firstPokemon(pokemonName);
    std::cout << firstPokemon.speak() << std::endl ;
    std::cout << firstPokemon.thunderWave() << std::endl;
    return 0;
}
