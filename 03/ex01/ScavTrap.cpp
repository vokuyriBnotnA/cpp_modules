#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap construct for unnamed" << std::endl;
    health = 100;
    energy = 50;
    damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap construct for "<< name << std::endl;
    health = 100;
    energy = 50;
    damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destruct for "<< name << std::endl;
}

void ScavTrap::operator=(const ScavTrap &f)
{
    name = f.name;
    health = f.health;
    energy = f.energy;
    damage = f.damage;
}

ScavTrap::ScavTrap(const ScavTrap &f)
{
    name = f.name;
    health = f.health;
    energy = f.energy;
    damage = f.damage;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}