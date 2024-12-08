// START: GENERATED
#pragma once /* ClapTrap.hpp */

#include <string> /* std::string */
#include <iostream> /* std::ostream */

#include "repr.hpp"

using std::string;
using std::ostream;

class ClapTrap {
public:
	~ClapTrap();
	ClapTrap();
	ClapTrap(const string&);
	ClapTrap(const string&, unsigned int, unsigned int, unsigned int);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(ClapTrap);
	void swap(ClapTrap&);
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
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);
private:
	string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;
};

void swap(ClapTrap&, ClapTrap&) /* noexcept */;
ostream& operator<<(ostream&, const ClapTrap&);

template<>
inline string repr(const ClapTrap& value) {
	return value.repr();
}
// END: GENERATED
