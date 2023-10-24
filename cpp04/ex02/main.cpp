#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *arr[4];

	for(int i =0; i < 4; i++)
	{
		if (i%2 == 0)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	for(int i=0; i < 4; i++)
	{
		arr[i]->makeSound();
	}
	for(int i =0; i < 4; i++)
	{
		delete arr[i];
	}

	// Cat *k; Cat *a ;

	// k = new Cat();
	// a= new Cat();

	// *a = *k;

	// std::cout << a->getType()<< std::endl;
	// delete k;
	
	// std::cout << a->getType()<< std::endl;
	// delete a;
	
	//system("leaks Zoo");
	return(0);
}