#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
    std::cout << "Destruct AAnimal" << std::endl;
}

const std::string &AAnimal::getType() const
{
    return type;
}