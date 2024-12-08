// <GENERATED>
#pragma once /* ScavTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp" /* repr<T> */
#include "ClapTrap.hpp"

using std::string;
using std::ostream;

class ScavTrap : public ClapTrap {
public:
	// <generated>
	~ScavTrap();
	ScavTrap();
	ScavTrap(const string&);
	ScavTrap(const string&, unsigned int, unsigned int, unsigned int);
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(ScavTrap);
	void swap(ScavTrap&);
	string repr() const;
	operator string() const;
	// </generated>

	void attack(const string&);
	void guardGate();
};

template <>
inline string repr(const ScavTrap& value) {
	return value.repr();
}

void swap(ScavTrap&, ScavTrap&) /* noexcept */;
ostream& operator<<(ostream& os, const ScavTrap& other);
// </GENERATED>
