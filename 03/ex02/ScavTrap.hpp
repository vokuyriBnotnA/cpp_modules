#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &f);
    ~ScavTrap();
    void operator=(const ScavTrap &f);
    
    void guardGate();
};

#endif