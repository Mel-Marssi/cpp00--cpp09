#pragma once

#include <iostream>
#include<exception>
#include "Form.hpp"

class Form;

class  Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		 Bureaucrat();
		 Bureaucrat(const Bureaucrat &copy);
		 Bureaucrat(std::string nam, int gr);
		 Bureaucrat &operator=(const Bureaucrat &copy);
		std::string const 	 getName() const;
		int 				 getGrade() const;
		void IncrementGrade();
		void DecrementGrade();
		void signForm(Form &sig);
		~ Bureaucrat();
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &op,const Bureaucrat &bur);
