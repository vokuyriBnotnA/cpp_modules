#include "ClapTrap.hpp"

int main()
{
    ClapTrap bob("Bob");
    bob.info();
    
	bob.attack("Tom");
    bob.info();

	bob.takeDamage(6);
    bob.info();

	bob.beRepaired(4);
    bob.info();

	bob.takeDamage(3);
    bob.info();

	bob.beRepaired(8);
    bob.info();

	bob.takeDamage(17);
    bob.info();

    return 0;
}