#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat construct" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destruct" << std::endl;
}

// Cat::Cat(const Cat &f)
// {
//     std::cout << "Cat copy" << std::endl;
// }

// void Cat::operator=(const Cat &f)
// {
//     std::cout << "Cat operator =" << std::endl;
// }