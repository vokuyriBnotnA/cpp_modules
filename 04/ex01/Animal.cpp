#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal construct" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "meta-animal say abra-cadabra" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

Animal::~Animal()
{
    std::cout << "Animal destruct" << std::endl;
}

Animal::Animal(Animal const &f)
{
    *this = f;
}

Animal &Animal::operator=(Animal const &f)
{
    type = f.getType();
    return *this;
}
