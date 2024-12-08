#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap bob("Bob");
	bob.attack("Alice");
	bob.guardGate();
	for (int i = 0; i < 3; ++i)
		bob.takeDamage(15);
	bob.beRepaired(3);
	for (int i = 0; i < 10; ++i)
		bob.takeDamage(15);
	std::cout << bob << '\n';
	ClapTrap weirdo("Weirdo");
	weirdo.attack("Alice");
	return 0;
}
