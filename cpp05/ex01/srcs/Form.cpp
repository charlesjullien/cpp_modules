#include "../includes/Form.hpp"

Form::Form()
{
	_name = "Unknown";
	_grade_required_to_execute = 150;
	_grade_required_to_sign = 150;
	_is_signed = false;
}

Form::Form(std::string name)
{
	_name = name;
	_grade_required_to_execute = 150;
	_grade_required_to_sign = 150;
	_is_signed = false;
}

Form::Form(int grade_required_to_sign, int grade_required_to_execute)
{
	_name = "Unknown";
	_grade_required_to_execute = grade_required_to_execute;
	_grade_required_to_sign = grade_required_to_sign;
	_is_signed = false;

	if (grade_required_to_sign > 150 || grade_required_to_execute > 150)
	{
		throw GradeTooLowException("Constructor exception : grade is too low... (beyond 150)");
	}
	if (grade_required_to_sign < 1 || grade_required_to_execute < 1)
	{
		throw GradeTooHighException("Constructor exception : grade is too high... (below 1)");
	}
}

Form::Form(std::string name,int grade_required_to_sign, int grade_required_to_execute)
{
	_name = name;
	_grade_required_to_execute = grade_required_to_execute;
	_grade_required_to_sign = grade_required_to_sign;
	_is_signed = false;

	if (grade_required_to_sign > 150 || grade_required_to_execute > 150)
	{
		throw GradeTooLowException("Constructor exception : grade is too low... (beyond 150)");
	}
	if (grade_required_to_sign < 1 || grade_required_to_execute < 1)
	{
		throw GradeTooHighException("Constructor exception : grade is too high... (below 1)");
	}
}

Form::Form(const Form &other)
{
	_name = other.getName();
	_grade_required_to_execute = other.get_grade_required_to_execute();
	_grade_required_to_sign = other.get_grade_required_to_sign();
	_is_signed = false;
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	_grade_required_to_execute = other.get_grade_required_to_execute();
	_grade_required_to_sign = other.get_grade_required_to_sign();
	_is_signed = other.get_is_signed();
	_name = other.getName();
	return (*this);
}

const std::string& Form::getName() const
{
    return (_name);
}

bool Form::get_is_signed() const
{
	
}


std::ostream& operator<<(std::ostream& os, const Form &a)
{
    os << a.getName() << ", Form grade " << a.getGrade();
    return (os);
}

Form::GradeTooHighException::GradeTooHighException(const char *error)
{
	_error = error;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return (_error);
}

Form::GradeTooLowException::GradeTooLowException(const char *error)
{
	_error = error;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return (_error);
}

Form::~Form()
{
	
}

