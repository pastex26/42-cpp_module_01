#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("golf club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}
	{
		Weapon	club = Weapon("golf club");

		HumanB	bob("Bob");
		bob.attack();
		bob.setWeapon(club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}

	return 0;
}
