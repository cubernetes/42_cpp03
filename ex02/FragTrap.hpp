// <GENERATED>
#pragma once /* FragTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp" /* repr<T> */
#include "ClapTrap.hpp"

using std::string;
using std::ostream;

class FragTrap : public ClapTrap {
public:
	// <generated>
	~FragTrap();
	FragTrap();
	FragTrap(const string&);
	FragTrap(const string&, unsigned int, unsigned int, unsigned int);
	FragTrap(const FragTrap&);
	FragTrap& operator=(FragTrap);
	void swap(FragTrap&);
	string repr() const;
	operator string() const;
	// </generated>
	
	void highFivesGuys();
};

template <> inline string repr(const FragTrap& value) { return value.repr(); }
void swap(FragTrap&, FragTrap&) /* noexcept */;
ostream& operator<<(ostream&, const FragTrap&);
// </GENERATED>
