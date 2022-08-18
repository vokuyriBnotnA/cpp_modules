#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Zombie
{

    std::string name;

    public:

    Zombie(std::string name);
    void announce(void);
    ~Zombie();

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif