// <GENERATED>
#pragma once /* FragTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp" /* repr<T> */

using std::string;
using std::ostream;

class FragTrap {
public:
	// <generated>
	~FragTrap();
	FragTrap();
	FragTrap(const string&, unsigned int, unsigned int, unsigned int);
	FragTrap(const FragTrap&);
	FragTrap& operator=(FragTrap);
	void swap(FragTrap&);
	string repr() const;
	operator string() const;

	const string& get_name() const;
	unsigned int get_hit_points() const;
	unsigned int get_energy_points() const;
	unsigned int get_attack_damage() const;

	void set_name(const string&);
	void set_hit_points(unsigned int);
	void set_energy_points(unsigned int);
	void set_attack_damage(unsigned int);
	// </generated>
	
	void highFivesGuys();
};

template <>
inline string repr(const FragTrap& value) {
	return value.repr();
}

void swap(FragTrap&, FragTrap&) /* noexcept */;
ostream& operator<<(ostream&, const FragTrap&);
// </GENERATED>
