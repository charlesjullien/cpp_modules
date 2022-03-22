#include <iostream>
#include <string>

int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory adresses :" << std::endl;
	std::cout << "str           : " << &str << std::endl; 
	std::cout << "str pointer   : " << stringPTR << std::endl; 
	std::cout << "str reference : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Values of :" << std::endl;
	std::cout << "str           : " << str << std::endl; 
	std::cout << "str pointer   : " << *stringPTR << std::endl; 
	std::cout << "str reference : " << stringREF << std::endl; 


	return (0);
}