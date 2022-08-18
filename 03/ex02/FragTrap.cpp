#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "ScavTrap construct for unnamed" << std::endl;
    health = 100;
    energy = 50;
    damage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap construct for "<< name << std::endl;
    health = 100;
    energy = 50;
    damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destruct for "<< name << std::endl;
}

FragTrap::FragTrap(const FragTrap &f)
{
    name = f.name;
    health = f.health;
    energy = f.energy;
    damage = f.damage;
}

void FragTrap::operator=(const FragTrap &f)
{
    name = f.name;
    health = f.health;
    energy = f.energy;
    damage = f.damage;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " high-five" << std::endl;
}