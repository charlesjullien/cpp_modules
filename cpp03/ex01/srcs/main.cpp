#include "../includes/ScavTrap.hpp"

int main(int ac, char **av)
{
	ClapTrap Macron("Macron");
	std::cout << std::endl;
	ScavTrap Veran("Veran");
	ScavTrap Castex("Castex");

	Macron.attack("Castex");
	Castex.takeDamage(4);
	Macron.attack("Castex");
	Castex.takeDamage(2);
	Castex.beRepaired(3);
	Castex.beRepaired(3);

	Castex.guardGate();

	Castex.attack("Véran");
	Veran.takeDamage(0);

	Veran.attack("Castex");
	Castex.takeDamage(10);
	Castex.beRepaired(1);

	Veran.guardGate();

	Macron.attack("Castex");
	Castex.takeDamage(10);
	Castex.beRepaired(10);


	std::cout << "\n\n\n" <<std::endl;


	ScavTrap    elon;

    std::cout << "Hit points = " << elon.get_hp() << std::endl;
    std::cout << "Energy points = " << elon.get_mana() << std::endl;
    std::cout << "Attack damages = " << elon.get_ad() << std::endl;
    elon.takeDamage(30);

    ScavTrap    vlad(elon);
    vlad.takeDamage(30);

    ScavTrap    emmanuel;
    emmanuel = vlad;
    emmanuel.takeDamage(30);

    ScavTrap jeff("jeff");
    jeff.attack("elon");
    jeff.takeDamage(40);
    elon.beRepaired(90);
    elon.guardGate();


	return (0);	
}
