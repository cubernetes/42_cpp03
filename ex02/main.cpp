#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::cout << "\x1b\x5b""31mTesting CONSTRUCTOR ScavTrap\x1b\x5bm\n";
	ScavTrap bob("Bob");
	std::cout << "\x1b\x5b""31mTesting ATTACK ScavTrap\x1b\x5bm\n";
	bob.attack("Alice");
	std::cout << "\x1b\x5b""31mTesting GUARD GATE\x1b\x5bm\n";
	bob.guardGate();
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE ScavTrap\x1b\x5bm\n";
	for (int i = 0; i < 3; ++i)
		bob.takeDamage(15);
	std::cout << "\x1b\x5b""31mTesting REPAIRING ScavTrap\x1b\x5bm\n";
	bob.beRepaired(3);
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE ScavTrap\x1b\x5bm\n";
	for (int i = 0; i < 10; ++i)
		bob.takeDamage(15);
	std::cout << "\x1b\x5b""31mTesting << OVERLOAD ScavTrap\x1b\x5bm\n";
	std::cout << "Bob's state: " << bob << "\n\n";

	std::cout << "\x1b\x5b""31mTesting CONSTRUCTOR FragTrap\x1b\x5bm\n";
	FragTrap santa("Santa");
	std::cout << "\x1b\x5b""31mTesting ATTACK FragTrap\x1b\x5bm\n";
	santa.attack("Alice");
	std::cout << "\x1b\x5b""31mTesting HIGH FIVES\x1b\x5bm\n";
	santa.highFivesGuys();
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE FragTrap\x1b\x5bm\n";
	for (int i = 0; i < 3; ++i)
		santa.takeDamage(15);
	std::cout << "\x1b\x5b""31mTesting REPAIRING FragTrap\x1b\x5bm\n";
	santa.beRepaired(3);
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE FragTrap\x1b\x5bm\n";
	for (int i = 0; i < 10; ++i)
		santa.takeDamage(15);
	std::cout << "\x1b\x5b""31mTesting << OVERLOAD FragTrap\x1b\x5bm\n";
	std::cout << "Santa's state:" << santa << "\n\n";

	std::cout << "\x1b\x5b""31mTesting CONSTRUCTOR ClapTrap\x1b\x5bm\n";
	ClapTrap weirdo("Weirdo");
	std::cout << "\x1b\x5b""31mTesting ATTACK ClapTrap\x1b\x5bm\n";
	weirdo.attack("Alice");
	std::cout << "\x1b\x5b""31mTesting << OVERLOAD ClapTrap\x1b\x5bm\n";
	std::cout << "Weirdo's state: " << weirdo << "\n\n";
	std::cout << "\x1b\x5b""31mTesting DESTRUCTORS\x1b\x5bm\n";
	return 0;
}
