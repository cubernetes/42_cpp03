// <GENERATED>
#include <iostream> /* std::cout, std::swap, std::ostream */
#include <string> /* std::string */
#include <sstream> /* std::stringstream */

#include "repr.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout;
using std::swap;
using std::string;
using std::ostream;
using std::stringstream;

// De- & Constructors
DiamondTrap::~DiamondTrap() { cout << "~DiamondTrap()\n"; }
// DiamondTrap::DiamondTrap() { cout << "DiamondTrap()\n"; }
DiamondTrap::DiamondTrap(const string& name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage) : _name(name), _hit_points(hit_points), _energy_points(energy_points), _attack_damage(attack_damage) { cout << *this << '\n'; }
DiamondTrap::DiamondTrap(const DiamondTrap& other) : _name(other._name), _hit_points(), _energy_points(), _attack_damage() { cout << "DiamondTrap(" << ::repr(other) << ")\n"; }

// Copy-assignment operator (using copy-swap idiom)
DiamondTrap& DiamondTrap::operator=(DiamondTrap other) /* noexcept */ {
	cout << "DiamondTrap& DiamondTrap::operator=(" << ::repr(other) << ")\n";
	::swap(*this, other);
	return *this;
}

// Generated member functions
string DiamondTrap::repr() const {
	stringstream out;
	out << "DiamondTrap(" << ::repr(_name) << ", " << ::repr(_hit_points) << ", " << ::repr(_energy_points) << ", " << ::repr(_attack_damage) << ")";
	return out.str();
}
void DiamondTrap::swap(DiamondTrap& other) /* noexcept */ {
	::swap(_name, other._name);
	::swap(_hit_points, other._hit_points);
	::swap(_energy_points, other._energy_points);
	::swap(_attack_damage, other._attack_damage);
}
DiamondTrap::operator string() const { return ::repr(*this); }

// Generated free functions
void swap(DiamondTrap& a, DiamondTrap& b) /* noexcept */ { a.swap(b); }
ostream& operator<<(ostream& os, const DiamondTrap& other) { return os << static_cast<string>(other); }
// </GENERATED>

void DiamondTrap::whoAmI() {
	if (_energy_points > 0) {
		if (_hit_points > 0) {
			cout << "DiamondTrap " << _name << " announces:" << << "\n";
		} else {
			cout << "DiamondTrap " << _name << " has no hit points left to high-five, :'((((((\n";
		}
	} else {
		cout << "DiamondTrap " << _name << " has no energy points left to high-five, >:(((((\n";
	}
}
