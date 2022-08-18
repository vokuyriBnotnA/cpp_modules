#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:

    std::string type;

    public:

    Animal();
    Animal(const Animal &f);
    virtual Animal &operator=(const Animal &f);
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
    virtual Brain *getBrain() const = 0;
};

#endif