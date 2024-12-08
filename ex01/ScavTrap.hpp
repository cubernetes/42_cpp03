// START: GENERATED
#pragma once /* ScavTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp" /* repr<T> */
#include "ClapTrap.hpp"

using std::string;
using std::ostream;

class ScavTrap : public ClapTrap {
public:
	~ScavTrap();
	ScavTrap();
	ScavTrap(const string&);
	ScavTrap(const string&, unsigned int, unsigned int, unsigned int);
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(ScavTrap);
	void swap(ScavTrap&);
	string repr() const;
	operator string() const;

	const string& name() const;
	unsigned int hit_points() const;
	unsigned int energy_points() const;
	unsigned int attack_damage() const;

	void name(const string&);
	void hit_points(unsigned int);
	void energy_points(unsigned int);
	void attack_damage(unsigned int);

	void attack(const string&);
	void guardGate();
};

template <>
inline string repr(const ScavTrap& value) {
	return value.repr();
}

void swap(ScavTrap&, ScavTrap&) /* noexcept */;
ostream& operator<<(ostream&, const ScavTrap&);
// END: GENERATED
