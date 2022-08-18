#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog construct" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destruct" << std::endl;
}


// Dog::Dog(const Dog &f)
// {
//     std::cout << "Dog copy" << std::endl;
// }

// void Dog::operator=(const Dog &f)
// {
//     std::cout << "Dog operator =" << std::endl;
// }
