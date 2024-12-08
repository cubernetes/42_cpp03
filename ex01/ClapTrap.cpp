// START: GENERATED
#include <iostream> /* std::cout, std::swap, std::ostream */
#include <string> /* std::string */
#include <sstream> /* std::stringstream */

#include "repr.hpp"
#include "ClapTrap.hpp"

using std::cout;
using std::swap;
using std::string;
using std::ostream;
using std::stringstream;

ClapTrap::~ClapTrap() {
	cout << "~ClapTrap()\n";
}

ClapTrap::ClapTrap() : _name("Anonymous ClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	cout << "ClapTrap()\n";
}

ClapTrap::ClapTrap(const string& name) : _name(name),  _hit_points(10), _energy_points(10), _attack_damage(0) {
	cout << "ClapTrap(" << ::repr(name) << ")\n";
}

ClapTrap::ClapTrap(const string& name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage) : _name(name), _hit_points(hit_points), _energy_points(energy_points), _attack_damage(attack_damage) {
	cout << *this << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage) {
	cout << "ClapTrap(" << ::repr(other) << ")\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap other) /* noexcept */ {
	cout << "ClapTrap& ClapTrap::operator=(" << ::repr(other) << ")\n";
	::swap(*this, other);
	return *this;
}

void swap(ClapTrap& a, ClapTrap& b) /* noexcept */ {
	a.swap(b);
}

void ClapTrap::swap(ClapTrap& other) /* noexcept */ {
	::swap(_name, other._name);
	::swap(_hit_points, other._hit_points);
	::swap(_energy_points, other._energy_points);
	::swap(_attack_damage, other._attack_damage);
}

const string& ClapTrap::name() const { return _name; }
unsigned int ClapTrap::hit_points() const { return _hit_points; }
unsigned int ClapTrap::energy_points() const { return _energy_points; }
unsigned int ClapTrap::attack_damage() const { return _attack_damage; }

void ClapTrap::name(const string& value) { _name = value; }
void ClapTrap::hit_points(unsigned int value) { _hit_points = value; }
void ClapTrap::energy_points(unsigned int value) { _energy_points = value; }
void ClapTrap::attack_damage(unsigned int value) { _attack_damage = value; }

string ClapTrap::repr() const {
	stringstream out;
	out << "ClapTrap(" << ::repr(_name) << ", " << ::repr(_hit_points) << ", " << ::repr(_energy_points) << ", " << ::repr(_attack_damage) << ")";
	return out.str();
}

ClapTrap::operator string() const {
	return ::repr(*this);
}

ostream& operator<<(ostream& os, const ClapTrap& other) {
	return os << static_cast<string>(other);
}
// END: GENERATED

void ClapTrap::attack(const string& target) {
	if (_energy_points > 0) {
		if (_hit_points > 0) {
			cout << "ClapTrap " << _name << " deals " << _attack_damage << " hit points damage to " << target << '\n';
			--_energy_points;
		} else {
			cout << "ClapTrap " << _name << " has no hit points left to attack\n";
		}
	} else {
		cout << "ClapTrap " << _name << " has no energy points left to attack\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points <= 0) {
		cout << "It's like beating a dead horse! " << "ClapTrap " << _name << " is already dead!\n";
		return;
	}
	cout << "ClapTrap " << _name << " takes " << amount << " hit points of damage\n";
	if (amount >= _hit_points) {
		cout << "ClapTrap " << _name << " died!\n";
		_hit_points = 0;
	} else
		_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0) {
		if (_hit_points > 0) {
			cout << "ClapTrap " << _name << " regenerates ('repairs') " << amount << " hit points\n";
			_hit_points += amount;
			--_energy_points;
		} else {
			cout << "ClapTrap " << _name << " has no hit points left to repair itself\n";
		}
	} else {
		cout << "ClapTrap " << _name << " has no energy points left to repair itself\n";
	}
}

