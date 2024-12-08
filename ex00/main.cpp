#include <iostream>

#include "ClapTrap.hpp"

int main() {
	ClapTrap trap("Bob");
	std::cout << "\n";
	trap.hit_points(3);
	trap.energy_points(3);
	trap.attack_damage(2);
	std::cout << trap << "\n\n";
	trap.attack("Sara");
	std::cout << trap << "\n\n";
	trap.takeDamage(1);
	std::cout << trap << "\n\n";
	trap.beRepaired(1);
	std::cout << trap << "\n\n";
	trap.beRepaired(1);
	std::cout << trap << "\n\n";
	trap.beRepaired(1);
	std::cout << trap << "\n\n";
	trap.beRepaired(1);
	std::cout << trap << "\n\n";
	trap.takeDamage(1);
	std::cout << trap << "\n\n";
	trap.takeDamage(1);
	std::cout << trap << "\n\n";
	trap.takeDamage(1);
	std::cout << trap << "\n\n";
	trap.takeDamage(1);
	std::cout << trap << "\n\n";
	trap.takeDamage(1);
	std::cout << trap << "\n\n";
	trap.takeDamage(1);
	std::cout << trap << "\n\n";
	return 0;
}
