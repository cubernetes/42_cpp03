// START: GENERATED
#pragma once /* ScavTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp"
#include "ClapTrap.hpp"

using std::string;
using std::ostream;

class ScavTrap : public ClapTrap {
public:
	~ScavTrap();
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(ScavTrap);
	void swap(ScavTrap&);
	string repr() const;
	operator string() const;

	const std::string& name() const;
	const unsigned int& hit_points() const;
	const unsigned int& energy_points() const;
	const unsigned int& attack_damage() const;

	void name(const std::string&);
	void hit_points(const unsigned int&);
	void energy_points(const unsigned int&);
	void attack_damage(const unsigned int&);

	void attack(const string& target);
	void guardGate();
private:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;
};

void swap(ScavTrap& a, ScavTrap& b) /* noexcept */;
ostream& operator<<(ostream&, const ScavTrap&);

template <>
inline string repr(const ScavTrap& value) {
	return value.repr();
}
// END: GENERATED
