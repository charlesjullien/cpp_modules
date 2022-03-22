#include "../includes/Karen.hpp"

int main ()
{
	Karen k;
	std::cout << std::endl;
	k.complain("WARNING");
	std::cout << std::endl;
	k.complain("ERROR");
	std::cout << std::endl;
	k.complain("DEBUG");
	std::cout << std::endl;
	k.complain("INFO");
	std::cout << std::endl;

	return (0);
}