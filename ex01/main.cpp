#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "\x1b\x5b""31mTesting CONSTRUCTOR ScavTrap\x1b\x5bm\n";
	ScavTrap bob("Bob");
	std::cout << "\x1b\x5b""31mTesting ATTACK ScavTrap\x1b\x5bm\n";
	bob.attack("Alice");
	std::cout << "\x1b\x5b""31mTesting GUARD GATE\x1b\x5bm\n";
	bob.guardGate();
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE\x1b\x5bm\n";
	for (int i = 0; i < 3; ++i)
		bob.takeDamage(15);
	std::cout << "\x1b\x5b""31mTesting REPARING\x1b\x5bm\n";
	bob.beRepaired(3);
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE\x1b\x5bm\n";
	for (int i = 0; i < 10; ++i)
		bob.takeDamage(15);
	std::cout << "\x1b\x5b""31mTesting << OVERLOAD ScavTrap\x1b\x5bm\n";
	std::cout << bob << '\n';
	std::cout << "\x1b\x5b""31mTesting CONSTRUCTOR ClapTrap\x1b\x5bm\n";
	ClapTrap weirdo("Weirdo");
	std::cout << "\x1b\x5b""31mTesting ATTACK ClapTrap\x1b\x5bm\n";
	weirdo.attack("Alice");
	std::cout << "\x1b\x5b""31mTesting DESTRUCTORS\x1b\x5bm\n";
	return 0;
}
