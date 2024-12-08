// START: GENERATED
#include <iostream> /* std::cout, std::swap, std::ostream */
#include <string> /* std::string */
#include <sstream> /* std::stringstream */

#include "repr.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::swap;
using std::string;
using std::ostream;
using std::stringstream;

ScavTrap::~ScavTrap() {
	cout << "~ScavTrap()\n";
}

ScavTrap::ScavTrap() : _name("Anonymous ScavTrap"), _hit_points(100), _energy_points(50), _attack_damage(20) {
	cout << "ScavTrap()\n";
}

ScavTrap::ScavTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage) : _name(name), _hit_points(hit_points), _energy_points(energy_points), _attack_damage(attack_damage) {
	cout << *this << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& other) : _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage) {
	cout << "ScavTrap(const ScavTrap& other)\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap other) /* noexcept */ {
	cout << "ScavTrap& ScavTrap::operator=(ScavTrap other)\n";
	::swap(*this, other);
	return *this;
}

void swap(ScavTrap& a, ScavTrap& b) /* noexcept */ {
	a.swap(b);
}

void ScavTrap::swap(ScavTrap& other) /* noexcept */ {
	::swap(_name, other._name);
	::swap(_hit_points, other._hit_points);
	::swap(_energy_points, other._energy_points);
	::swap(_attack_damage, other._attack_damage);
}

const std::string& ScavTrap::name() const { return _name; }
const unsigned int& ScavTrap::hit_points() const { return _hit_points; }
const unsigned int& ScavTrap::energy_points() const { return _energy_points; }
const unsigned int& ScavTrap::attack_damage() const { return _attack_damage; }

void ScavTrap::name(const std::string& value) { _name = value; }
void ScavTrap::hit_points(const unsigned int& value) { _hit_points = value; }
void ScavTrap::energy_points(const unsigned int& value) { _energy_points = value; }
void ScavTrap::attack_damage(const unsigned int& value) { _attack_damage = value; }

string ScavTrap::repr() const {
	stringstream out;
	out << "ScavTrap(" << ::repr(_name) << ", " << ::repr(_hit_points) << ", " << ::repr(_energy_points) << ", " << ::repr(_attack_damage) << ")";
	return out.str();
}

ScavTrap::operator string() const {
	return ::repr(*this);
}

ostream& operator<<(ostream& os, const ScavTrap& other) {
	return os << static_cast<string>(other);
}
// END: GENERATED

void ScavTrap::attack(const string& target) {
	if (_energy_points > 0) {
		if (_hit_points > 0) {
			cout << "ScavTrap " << _name << " attacks furiously! The deal " << _attack_damage << " hit points damage to " << target << '\n';
			--_energy_points;
		} else {
			cout << "ScavTrap " << _name << " has no hit points left to attack, what a bummer\n";
		}
	} else {
		cout << "ScavTrap " << _name << " has no energy points left to attack, truly a pity\n";
	}
}

void ScavTrap::guardGate() {
	if (_energy_points > 0) {
		if (_hit_points > 0) {
			cout << "ScavTrap " << _name << " is now in GATE KEEPER MODE!\n";
		} else {
			cout << "ScavTrap " << _name << " has no hit points left to guard the gate, what a bummer\n";
		}
	} else {
		cout << "ScavTrap " << _name << " has no energy points left to guard the gate, truly a pity\n";
	}
}
