#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	{
		FragTrap Bob("Bob");
		Bob.attack("Jack");
		Bob.takeDamage(6);
		Bob.beRepaired(4);
		Bob.takeDamage(3);
		Bob.highFivesGuys();
		Bob.beRepaired(8);
		Bob.takeDamage(17);
	}
	{
		ScavTrap Jhon("Jhon");
		Jhon.attack("Jack");
		Jhon.takeDamage(6);
		Jhon.beRepaired(4);
		Jhon.takeDamage(3);
		Jhon.guardGate();
		Jhon.beRepaired(8);
		Jhon.takeDamage(17);
	}
	{
		ClapTrap Steve("Steve");
		Steve.attack("Jack");
		Steve.takeDamage(6);
		Steve.beRepaired(4);
		Steve.takeDamage(3);
		Steve.beRepaired(8);
		Steve.takeDamage(17);
	}
}