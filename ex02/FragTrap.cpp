// <GENERATED>
#include <iostream> /* std::cout, std::swap, std::ostream */
#include <string> /* std::string */
#include <sstream> /* std::stringstream */

#include "repr.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::swap;
using std::string;
using std::ostream;
using std::stringstream;

// De- & Constructors
FragTrap::~FragTrap() { cout << "~FragTrap()\n"; }
FragTrap::FragTrap() : _name("Anonymous FragTrap"), _hit_points(100), _energy_points(100), _attack_damage(30) { cout << "FragTrap()\n"; }
FragTrap::FragTrap(const string& name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage) : _name(name), _hit_points(hit_points), _energy_points(energy_points), _attack_damage(attack_damage) { cout << *this << '\n'; }
FragTrap::FragTrap(const FragTrap& other) : _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage) { cout << "FragTrap(" << ::repr(other) << ")\n"; }

// Copy-assignment operator (using copy-swap idiom)
FragTrap& FragTrap::operator=(FragTrap other) /* noexcept */ {
	cout << "FragTrap& FragTrap::operator=(" << ::repr(other) << ")\n";
	::swap(*this, other);
	return *this;
}

// Generated member functions
string FragTrap::repr() const {
	stringstream out;
	out << "FragTrap(" << ::repr(_name) << ", " << ::repr(_hit_points) << ", " << ::repr(_energy_points) << ", " << ::repr(_attack_damage) << ")";
	return out.str();
}
void FragTrap::swap(FragTrap& other) /* noexcept */ {
	::swap(_name, other._name);
	::swap(_hit_points, other._hit_points);
	::swap(_energy_points, other._energy_points);
	::swap(_attack_damage, other._attack_damage);
}
FragTrap::operator string() const { return ::repr(*this); }

// Generated free functions
void swap(FragTrap& a, FragTrap& b) /* noexcept */ { a.swap(b); }
ostream& operator<<(ostream& os, const FragTrap& other) { return os << static_cast<string>(other); }
// </GENERATED>

void FragTrap::highFivesGuys() {
	if (_energy_points > 0) {
		if (_hit_points > 0) {
			cout << "FragTrap " << _name << " GIVE A BIG HIGH FIVE!\n";
		} else {
			cout << "FragTrap " << _name << " has no hit points left to high-five, :'((((((\n";
		}
	} else {
		cout << "FragTrap " << _name << " has no energy points left to high-five, >:(((((\n";
	}
}
