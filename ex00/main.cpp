#include <iostream>

#include "ClapTrap.hpp"

int main() {
	std::cout << "\x1b\x5b""31mTesting CONSTRUCTOR ClapTrap\x1b\x5bm\n";
	ClapTrap bob("Bob");
	std::cout << "\x1b\x5b""31mTesting ATTACK ClapTrap\x1b\x5bm\n";
	bob.attack("Sara");
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE ClapTrap\x1b\x5bm\n";
	for (int i = 0; i < 2; ++i)
		bob.takeDamage(3);
	std::cout << "\x1b\x5b""31mTesting REPARING ClapTrap\x1b\x5bm\n";
	bob.beRepaired(10);
	std::cout << "\x1b\x5b""31mTesting TAKE DAMAGE ClapTrap\x1b\x5bm\n";
	for (int i = 0; i < 7; ++i)
		bob.takeDamage(3);
	std::cout << "\x1b\x5b""31mTesting REPARING ClapTrap\x1b\x5bm\n";
	bob.beRepaired(10);
	std::cout << "\x1b\x5b""31mTesting DESTRUCTOR ClapTrap\x1b\x5bm\n";
	return 0;
}
