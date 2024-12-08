#include <iostream>

#include "ClapTrap.hpp"

int main() {
	ClapTrap trap1("Bob");
	std::cout << "\n";
	trap1.hit_points(3);
	trap1.energy_points(3);
	trap1.attack_damage(2);
	std::cout << trap1 << "\n\n";
	trap1.attack("Sara");
	std::cout << trap1 << "\n\n";
	trap1.takeDamage(1);
	std::cout << trap1 << "\n\n";
	trap1.beRepaired(1);
	std::cout << trap1 << "\n\n";
	trap1.beRepaired(1);
	std::cout << trap1 << "\n\n";
	trap1.beRepaired(1);
	std::cout << trap1 << "\n\n";
	trap1.beRepaired(1);
	std::cout << trap1 << "\n\n";
	trap1.takeDamage(1);
	std::cout << trap1 << "\n\n";
	trap1.takeDamage(1);
	std::cout << trap1 << "\n\n";
	trap1.takeDamage(1);
	std::cout << trap1 << "\n\n";
	trap1.takeDamage(1);
	std::cout << trap1 << "\n\n";
	trap1.takeDamage(1);
	std::cout << trap1 << "\n\n";
	trap1.takeDamage(1);
	std::cout << trap1 << "\n\n";
	return 0;
}
