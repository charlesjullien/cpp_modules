#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main(int ac, char **av)
{
    /*Bureaucrat chef("chef", 1);
    PresidentialPardonForm bandit("bandit");

    chef.signForm(bandit);
    chef.executeForm(bandit);*/

    std::srand(std::time(NULL));
    {
        PresidentialPardonForm pre("tag");
        Bureaucrat bru("bru", 1);

        bru.signForm(pre);
        bru.executeForm(pre);
        std::cout << bru << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        PresidentialPardonForm pre("tag");
        Bureaucrat bru("bru", 10);

        bru.signForm(pre);
        bru.executeForm(pre);
        std::cout << bru << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        PresidentialPardonForm pre("tag");
        Bureaucrat bru("bru", 1);

        pre.BeSigned(bru);
        pre.execute(bru);
        std::cout << bru << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        PresidentialPardonForm pre("tag");
        Bureaucrat bru("bru", 1);

        bru.executeForm(pre);
        std::cout << bru << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        RobotomyRequestForm rob("tag");
        Bureaucrat bru("bru", 1);

        bru.signForm(rob);
        bru.executeForm(rob);
        std::cout << bru << std::endl;
        std::cout << rob << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        RobotomyRequestForm rob("tag");
        Bureaucrat bru("bru", 1);

        bru.signForm(rob);
        bru.executeForm(rob);
        std::cout << bru << std::endl;
        std::cout << rob << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        RobotomyRequestForm rob("tag");
        Bureaucrat bru("bru", 1);

        bru.signForm(rob);
        bru.executeForm(rob);
        std::cout << bru << std::endl;
        std::cout << rob << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        ShrubberyCreationForm shr("tag");
        Bureaucrat bru("bru", 1);

        bru.signForm(shr);
        bru.executeForm(shr);
        std::cout << bru << std::endl;
        std::cout << shr << std::endl;
    }

	return (0);	
}
