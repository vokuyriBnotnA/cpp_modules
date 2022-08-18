#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    Brain *brain;
    
    public:

    Cat();
    Cat(const Cat &f);
    ~Cat();
    Cat &operator=(const Cat &f);
    virtual AAnimal &operator=(AAnimal const &f);

    virtual Brain *getBrain() const;
    virtual void makeSound() const;
};

#endif