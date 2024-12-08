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
	ClapTrap(string name);
	ClapTrap(string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(ClapTrap);
	void swap(ClapTrap&);
	string repr() const;
	operator string() const;

	const string& name() const;
	const unsigned int& hit_points() const;
	const unsigned int& energy_points() const;
	const unsigned int& attack_damage() const;

	void name(const std::string&);
	void hit_points(const unsigned int&);
	void energy_points(const unsigned int&);
	void attack_damage(const unsigned int&);

	void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;
};

void swap(ClapTrap& a, ClapTrap& b) /* noexcept */;
ostream& operator<<(ostream&, const ClapTrap&);

template<>
inline string repr(const ClapTrap& value) {
	return value.repr();
}
// END: GENERATED
