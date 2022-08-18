#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    std::string _type;

    public:

    Weapon() {}
    Weapon(std::string type) {
        _type = type;
    }
    std::string getType()
    {
        return (_type);
    }
    void setType(std::string type)
    {
        _type = type;
    }

};

class HumanA
{
    std::string _name;
    Weapon *_gun;

    public:

    HumanA(std::string name, Weapon &gun)
    {
        _name = name;
        _gun = &gun;
    }

    void attack()
    {
        std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
    }

};

class HumanB
{
    std::string _name;
    Weapon *_gun;

    public:

    HumanB(std::string name)
    {
        _name = name;
    }

    void setWeapon(Weapon &gun)
    {
        _gun = &gun;
    }

    void attack()
    {
        std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
    }

};

#endif