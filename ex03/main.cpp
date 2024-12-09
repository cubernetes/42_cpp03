#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout;

int main() {
	ScavTrap bob("Bob");
	bob.attack("Alice");
	bob.guardGate();
	for (int i = 0; i < 3; ++i)
		bob.takeDamage(15);
	bob.beRepaired(3);
	for (int i = 0; i < 10; ++i)
		bob.takeDamage(15);
	cout << "Bob's state: " << bob << "\n\n";

	FragTrap santa("Santa");
	santa.attack("Alice");
	santa.highFivesGuys();
	for (int i = 0; i < 3; ++i)
		santa.takeDamage(15);
	santa.beRepaired(3);
	for (int i = 0; i < 10; ++i)
		santa.takeDamage(15);
	cout << "Santa's state:" << santa << "\n\n";

	ClapTrap weirdo("Weirdo");
	weirdo.attack("Alice");
	cout << "Weirdo's state: " << weirdo << "\n\n";

	cout << "TESTING DiamondTrap string CONSTRUCTOR and whoAmI\n";
	DiamondTrap dia("Dia");
	dia.whoAmI();
	cout << '\n';

	cout << "TESTING DiamondTrap DEFAULT CONSTRUCTOR and virtual DESTRUCTORS\n";
	ClapTrap *clappyDia = new DiamondTrap("Dia2");
	clappyDia->attack("something");
	cout << '\n';

	cout << "TESTING CORRECT ORDER FOR DESTRUCTORS\n";
	delete clappyDia;
	cout << '\n';

	cout << "TESTING DiamondTrap COPY-ASSIGNMENT OPERATOR\n";
	DiamondTrap dia3;
	dia3 = dia;
	cout << '\n';

	cout << "Leaving scope of main\n";
	return 0;
}
