#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ScavTrap bob("Bob");
	bob.attack("Alice");
	bob.guardGate();
	for (int i = 0; i < 3; ++i)
		bob.takeDamage(15);
	bob.beRepaired(3);
	for (int i = 0; i < 10; ++i)
		bob.takeDamage(15);
	std::cout << "Bob's state: " << bob << "\n\n";

	FragTrap santa("Santa");
	santa.attack("Alice");
	santa.highFivesGuys();
	for (int i = 0; i < 3; ++i)
		santa.takeDamage(15);
	santa.beRepaired(3);
	for (int i = 0; i < 10; ++i)
		santa.takeDamage(15);
	std::cout << "Santa's state:" << santa << "\n\n";

	ClapTrap weirdo("Weirdo");
	weirdo.attack("Alice");
	std::cout << "Weirdo's state: " << weirdo << "\n\n";
	return 0;
}
