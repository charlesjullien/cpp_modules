#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(int ac, char **av)
{
	const Animal* sample[4];

    for (int i = 0; i < 2; ++i)
    {
        sample[i] = new Dog();
    }
    for (int i = 2; i < 4; ++i)
    {
        sample[i] = new Cat();
    }

    for (int i = 0; i < 4; ++i)
    {
        delete sample[i];
    }

	//MAIN DE KOTA... LE CHANGER POUR MES PROPRES TESTS !

    Cat cat;
    Cat cat2;
    cat.define_cat_ideas(0, "str");
    cat2 = cat;
    std::cout << "cat brain ideas 0: " << cat.get_cat_ideas(0) << std::endl;
    std::cout << "cat2 brain ideas 0: " << cat2.get_cat_ideas(0) << std::endl;
    std::cout << "cat brain ideas 0 addres: " << &(cat.get_cat_ideas(0)) << std::endl;
    std::cout << "cat2 brain ideas 0 addres: " << &(cat2.get_cat_ideas(0)) << std::endl;

    Cat cat3;
    cat3.define_cat_ideas(0, "str");
    Cat cat4(cat3);
    std::cout << "cat3 brain ideas 0: " << cat3.get_cat_ideas(0) << std::endl;
    std::cout << "cat4 brain ideas 0: " << cat4.get_cat_ideas(0) << std::endl;
    std::cout << "cat3 brain ideas 0 addres: " << &(cat3.get_cat_ideas(0)) << std::endl;
    std::cout << "cat4 brain ideas 0 addres: " << &(cat4.get_cat_ideas(0)) << std::endl;

	return (0);	
}
