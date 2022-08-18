#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Zombie
{

    std::string name;

    public:

    Zombie();
    void setName(std::string name);
    void announce(void);
    ~Zombie();

};

Zombie* zombieHorde(int N, std::string name);

#endif