#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat construct" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destruct" << std::endl;
}

Cat::Cat(const Cat &f)
{
    *this = f;
}

Cat &Cat::operator=(const Cat &f)
{
    this->type = f.getType();
    *(this->brain) = *(f.getBrain());
    return *this;
}

Animal &Cat::operator=(Animal const &f)
{
    this->type = f.getType();
    *(this->brain) = *(f.getBrain());
    return *this;
}

Brain *Cat::getBrain() const
{
    return (brain);
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}