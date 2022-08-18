#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Construct himself" << std::endl;
    this->name = name;
    health = 10;
    energy = 10;
    damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destruct himself" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
    name = f.name;
    health = f.health;
    energy = f.energy;
    damage = f.damage;
}

void ClapTrap::operator=(const ClapTrap &f)
{
    name = f.name;
    health = f.health;
    energy = f.energy;
    damage = f.damage;
}

void ClapTrap::attack(const std::string& target)
{
    if (health > 0 && energy > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing 1 points of damage!" << std::endl;
        energy--;
    }
    if (health == 0)
    {
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
    }
    else if (energy == 0)
    {
        std::cout << "ClapTrap " << name << " have not energy" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (health > 0)
    {
        if (amount > health)
            health = 0;
        else
            health -= amount;
        if (health == 0)
        {
            std::cout << "ClapTrap " << name << " died suddenly!" << std::endl;
        }
        else
        {
            std::cout << "ClapTrap " << name << " was be attacks " << amount << " points" << std::endl;
        }
    }
    else
    {
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (health > 0 && energy >= amount)
    {
        health += amount;
        energy -= amount;
        std::cout << "ClapTrap " << name << " repair himself for  " << amount << " point!" << std::endl;
    }
    if (health == 0)
    {
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
    }
    else if (energy < amount)
    {
        std::cout << "ClapTrap " << name << " have not energy" << std::endl;
    }
}

void ClapTrap::info(void)
{
    std::cout << "ClapTrap: " << name << std::endl;
    std::cout << "health: " << health << std::endl;
    std::cout << "energy: " << energy << std::endl;
    std::cout << "damage: " << damage << std::endl;
}