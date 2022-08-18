#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog construct" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destruct" << std::endl;
}

Dog::Dog(const Dog &f)
{
    *this = f;
}

Dog &Dog::operator=(const Dog &f)
{
    this->type = f.getType();
    *(this->brain) = *(f.getBrain());
    return *this;
}

AAnimal &Dog::operator=(AAnimal const &f)
{
    this->type = f.getType();
    *(this->brain) = *(f.getBrain());
    return *this;
}

Brain *Dog::getBrain() const
{
    return (brain);
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}