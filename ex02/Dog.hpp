#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    Brain *brain;

    public:

    Dog();
    Dog(const Dog &f);
    ~Dog();
    virtual Dog &operator=(const Dog &f);
    virtual AAnimal &operator=(AAnimal const &f);

    virtual Brain *getBrain() const;
    virtual void makeSound() const;
};

#endif