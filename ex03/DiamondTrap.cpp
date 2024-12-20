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
DiamondTrap::DiamondTrap() : ClapTrap("Anonymous DiamondTrap_clap_name", 100, 50, 30), /* FragTrap("Anonymous FragTrap"), ScavTrap("Anonymous ScavTrap"), */ _name("Anonymous DiamondTrap") { cout << "DiamondTrap()\n"; }
DiamondTrap::DiamondTrap(const string& name) : ClapTrap(name + "_clap_name", 100, 50, 30), /* FragTrap(name), ScavTrap(name), */ _name(name) { cout << "DiamondTrap(" << ::repr(name) << ")\n"; }
DiamondTrap::DiamondTrap(const string& name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage) : ClapTrap(name + "_clap_name", hit_points, energy_points, attack_damage), /* FragTrap(name, hit_points, energy_points, attack_damage), ScavTrap(name, hit_points, energy_points, attack_damage), */ _name(name) { cout << *this << '\n'; }
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) { cout << "DiamondTrap(" << ::repr(other) << ")\n"; }

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
	::swap(ClapTrap::_name, other.ClapTrap::_name);
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
			cout << "DiamondTrap " << _name << " announces: <I AM THE HEIR OF ClapTrap " << ClapTrap::_name << " the Terrible, his Blood flows through my Veins!>" << "\n";
		} else {
			cout << "DiamondTrap " << _name << " has no hit points speak\n";
		}
	} else {
		cout << "DiamondTrap " << _name << " has no energy points speak\n";
	}
}
