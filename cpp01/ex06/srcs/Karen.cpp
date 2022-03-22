#include "../includes/Karen.hpp"

Karen::Karen()
{
	std::cout << "Karen Created..." << std::endl;
}

void	Karen::debug( void )
{
	std::cout << std::endl;
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketcup burger. I really do!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*ft_karen)(void);
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	int index;
	while (i < 4 && tab[i] != level)
		i++;
	index = i;
	while (index != -1)
	{
		switch (index)
		{
			case 0:
			{
				ft_karen = &Karen::debug;
				(this->*ft_karen)();
				index = 1;
				break;
			}
			case 1:
			{
				ft_karen = &Karen::info;
				(this->*ft_karen)();
				index = 2;
				break;
			}
			case 2:
			{
				ft_karen = &Karen::warning;
				(this->*ft_karen)();
				index = 3;
				break;
			}
			case 3:
			{
				ft_karen = &Karen::error;
				(this->*ft_karen)();
				index = -1;
				break;
			}

			default:
			{
				std::cout << "Karen needs an update..." << std::endl;
				index = -1;
				break;
			}
		}
	}
}

Karen::~Karen()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Karen Black-Holed..." << std::endl;
}