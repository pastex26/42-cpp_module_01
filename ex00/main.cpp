#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
	Zombie *patrick;
	
	if (argc > 2)
	{
		std::cerr << "too many args" << std::endl;
		return 1;
	}
	if (argc == 2)
		patrick = newZombie(argv[1]);
	else
		patrick = newZombie("");
	if (!patrick)
		return 1;
	patrick->announce();
	randomChump("temporary zombie");
	delete patrick;
	return 0;
}
