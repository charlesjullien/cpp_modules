#include "../includes/easyfind.hpp"

int main ()
{
	int i;
	int n;
	std::vector<int> digits;

	i = 0;
	n = 0;
	while (i < 20)
	{
		digits.push_back(i + 57);
		i++;
	}
	try
	{
		n = 60;
		easyfind(digits, n);
		n = 0;
		easyfind(digits, n);
	}
	catch(std::exception)
	{
		std::cerr << "The required number : " << n << " isn't in the container." << std::endl;
	}
	return (0);
}