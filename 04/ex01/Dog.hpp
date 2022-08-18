#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    Brain *brain;

    public:

    Dog();
    Dog(const Dog &f);
    ~Dog();
    virtual Dog &operator=(const Dog &f);
    virtual Animal &operator=(Animal const &f);

    virtual Brain *getBrain() const;
    virtual void makeSound() const;
};

#endif