#include "../includes/Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span test = Span(10);
	sp.addNumber(-1000);
	sp.addNumber(1000);
	sp.addNumber(3000);
	sp.addNumber(100);
	sp.addNumber(5);
	sp.addNumber(50);
	sp.addNumber(650);
	sp.addNumber(500);
	sp.addNumber(350);
	sp.addNumber(250);
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;


	return 0;
}