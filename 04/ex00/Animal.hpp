#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:

    std::string type;

    public:
    Animal();
    Animal(const Animal &f);
    Animal(std::string type);
    ~Animal();
    void operator=(const Animal &f);

    void makeSound() const;
    std::string getType() const;
    
};

#endif