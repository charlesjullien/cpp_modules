#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreation", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(cons std::string target): Form("ShrubberyCreation", 145, 137, target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	return (*this);
}

void ShrubberyCreationForm::action() const
{
	std::string trees = "  # #### ####                               # #### ####
                                ### \\/#|### |/####                               ### \\/#|### |/####
                               ##\\/#/ \\||/##/_/##/_#                               ##\\/#/ \\||/##/_/##/_#
                             ###  \\/###|/ \\/ # ###                               ###  \\/###|/ \\/ # ###
                           ##_\\_#\\_\\## | #/###_/_####                               ##_\\_#\\_\\## | #/###_/_####
                          ## #### # \\ #| /  #### ##/##                                ## #### # \\ #| /  #### ##/##
                           __#_--###`  |{,###---###-~                                __#_--###`  |{,###---###-~
                                     \\ }{                               \\ }{
                                      }}{                               }}{
                                      }}{                               }}{
                                 ejm  {{}                               ejm  {{}
                                , -=-~{ .-^- _                               , -=-~{ .-^- _
                                      `}                               `}
                                       {                               {";
	
	std::ofstream fichier(get_target() + "_shrubbery");
	if (!fichier)
	{
		throw std::runtime_error("Cannot open file.");
	}
	fichier << trees;
	if (fichier.fail())
	{
		throw std::runtime_error("Canot draw trees in the file.");
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

