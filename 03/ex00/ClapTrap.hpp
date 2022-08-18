#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    std::string     name;
    unsigned int    health;
    unsigned int    energy;
    unsigned int    damage;

    public:

    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &f);
    ~ClapTrap();
    void operator=(const ClapTrap &f);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void info(void);
};

#endif