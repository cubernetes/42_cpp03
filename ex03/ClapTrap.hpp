// <GENERATED>
#pragma once /* ClapTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp" /* repr<T> */

using std::string;
using std::ostream;

class ClapTrap {
public:
	// <generated>
	virtual ~ClapTrap();
	ClapTrap();
	ClapTrap(const string&);
	ClapTrap(const string&, unsigned int, unsigned int, unsigned int);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(ClapTrap);
	void swap(ClapTrap&);
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

	void attack(const string&);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);
protected:
	string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;
};

template <>
inline string repr(const ClapTrap& value) {
	return value.repr();
}

void swap(ClapTrap&, ClapTrap&) /* noexcept */;
ostream& operator<<(ostream&, const ClapTrap&);
// </GENERATED>
