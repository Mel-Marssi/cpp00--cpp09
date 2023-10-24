#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void function_main()
{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
	ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		
	delete bob;
	delete me;
	delete src;
}

void function_main1()
{
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = new Ice();
    me->equip(tmp);
    //----
    tmp = new Cure();
    me->equip(tmp);
    //----
      tmp = new Ice();
    me->equip(tmp);
 
    tmp = new Ice();
    me->equip(tmp); 
    //----
     tmp = new Ice();
    me->equip(tmp);
    
    tmp = new Ice();
    me->equip(tmp);
    
    tmp = new Ice();
    me->equip(tmp);
     delete me;

}
int main()
{
	function_main();
	//system("leaks Materia");
return 0;
}