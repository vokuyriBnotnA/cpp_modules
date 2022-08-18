#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{

    protected:

    std::string type;

    public:

    virtual ~AAnimal();
    virtual AAnimal &operator=(const AAnimal &f) = 0;
    virtual void makeSound() const = 0;
    const std::string &getType() const;
    virtual Brain *getBrain() const = 0;
};

#endif