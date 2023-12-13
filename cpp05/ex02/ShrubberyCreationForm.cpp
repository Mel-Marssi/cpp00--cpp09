#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", 145, 137)
{
	target = "Home";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm("Shrubbery", 145, 137)
{
	target = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :AForm(copy)
{
	*this =  copy;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (get_signed() && executor.getGrade() <= getGradeExecute())
	{
		std::ofstream	outfile;
		std::string asd = target + "_Shrubbery";
		outfile.open(asd.c_str());
		if (!outfile.is_open())
			return ;
		outfile <<"   oxoxoo    ooxooo\n";
		outfile <<"  ooxoxo oo  oxoxooo\n";
		outfile <<" oooo xxoxoo ooo ooox\n";
		outfile <<" oxo o oxoxo  xoxxoxo\n";
		outfile <<"  oxo xooxoooo o ooo\n";
		outfile <<"    ooo\\oo\\  /o/o\n";
		outfile <<"        \\  \\/ /\n";
		outfile <<"         |   /\n";
		outfile <<"         |  |\n";
		outfile <<"         | D|\n";
		outfile <<"         |  |\n";
		outfile <<"         |  |\n";
		outfile <<"  ______/____\\____ " <<std::endl;
	}
	else
			throw(GradeTooLowException());
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	
	target = copy.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}