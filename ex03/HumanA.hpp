#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	HumanA(std::string name);
	~HumanA();
	void	attack(void);
	void	setWeapon(Weapon& newWeapon);

private:
	const std::string	name;
	Weapon&				weapon;
};

#endif