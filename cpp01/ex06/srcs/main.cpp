#include "../includes/Karen.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage : ./karenFilter [level]" << std::endl;
		return (1);
	}
	std::string	level = av[1];

	Karen k;
	std::cout << std::endl;
	k.complain(level);

	return (0);
}