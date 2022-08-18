#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal construct" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal construct" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &f)
{
    type = f.type;
}

void Animal::operator=(const Animal &f)
{
    type = f.type;
}

void Animal::makeSound() const
{
    if (type == "Dog")
        std::cout << "Dog say bark" << std::endl;
    else if (type == "Cat")
        std::cout << "Cat say meow" << std::endl;
    else
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