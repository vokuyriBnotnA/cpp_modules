#include "ScavTrap.hpp"

int	main(void)
{
	{
		ScavTrap Bob("Bob");

		Bob.attack("Jack");

		Bob.takeDamage(6);

		Bob.beRepaired(4);

		Bob.takeDamage(3);

		Bob.guardGate();

		Bob.beRepaired(8);

		Bob.takeDamage(17);

	}
	{
		ClapTrap Tim("Tim");

		Tim.attack("Jack");

		Tim.takeDamage(6);

		Tim.beRepaired(4);

		Tim.takeDamage(3);

		Tim.beRepaired(8);

		Tim.takeDamage(17);

	}
}