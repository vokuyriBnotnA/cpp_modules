#include "Zombie.hpp"

int main()
{	
	// On heap
	Zombie *bob = newZombie("bob");
	bob->announce();
	delete bob;

	// On stack
	randomChump("greg");

	Zombie bonk("bonk");
	bonk.announce();

    return (0);
}