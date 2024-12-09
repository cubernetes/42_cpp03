// <GENERATED>
#pragma once /* DiamondTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp" /* repr<T> */
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

using std::string;
using std::ostream;

class DiamondTrap : public FragTrap, public ScavTrap {
public:
	// <generated>
	~DiamondTrap();
	DiamondTrap();
	DiamondTrap(const string&);
	DiamondTrap(const string&, unsigned int, unsigned int, unsigned int);
	DiamondTrap(const DiamondTrap&);
	DiamondTrap& operator=(DiamondTrap);
	void swap(DiamondTrap&);
	string repr() const;
	operator string() const;
	// </generated>
	
	using ScavTrap::attack;
	void whoAmI();
private:
	string _name;
};

template <>
inline string repr(const DiamondTrap& value) {
	return value.repr();
}

void swap(DiamondTrap&, DiamondTrap&) /* noexcept */;
ostream& operator<<(ostream&, const DiamondTrap&);
// </GENERATED>
