#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
void easyfind(T container, int searched_num)
{
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), searched_num);
	if (iter != container.end())
	{
		std::cout << searched_num << " exists in the container at position " << (iter - container.begin()) << std::endl;
		return ;
	}
	else
		throw (std::exception());
}


#endif