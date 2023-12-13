#pragma once

#include <iostream>
#include<fstream>
#include <ctime>
#include<exception>
#include <sys/time.h>
#include "AForm.hpp"

class AForm;

class  Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const  Bureaucrat &copy);
		Bureaucrat(std::string nam, int gr);
		Bureaucrat &operator=(const Bureaucrat &copy);
		std::string const 	 getName() const;
		int 				 getGrade() const;
		void				 IncrementGrade();
		void 				 DecrementGrade();
		void 				 signAForm(AForm &sig);
		void 				 executeForm (AForm const &form);
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
