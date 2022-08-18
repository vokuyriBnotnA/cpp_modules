#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain *brain;
    
    public:

    Cat();
    Cat(const Cat &f);
    ~Cat();
    Cat &operator=(const Cat &f);
    virtual Animal &operator=(Animal const &f);

    virtual Brain *getBrain() const;
    virtual void makeSound() const;
};

#endif