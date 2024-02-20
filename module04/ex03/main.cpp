/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:46:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/20 10:39:06 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	std::cout << "*** SUBJECT TESTS ***\n";
	
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

	std::cout << "\n*** MY TESTS ***\n";

	ICharacter *jane = new Character("jane");
	std::cout << "Character name = " << jane->getName() << "\n";

	std::cout << "Testing use and unequip without nothing equiped\n";
	jane->use(0, *jane);
	jane->use(1, *jane);
	jane->unequip(1);
	jane->use(1, *jane);
	std::cout << "--- NO CRASH ---\n";

	ICharacter *enemy = new Character("enemy");
	
	IMateriaSource *materias = new MateriaSource();
	
	materias->learnMateria(new Ice());	// slot 0
	materias->learnMateria(new Cure());	// slot 1

	AMateria *temp_ice = materias->createMateria("ice");
	AMateria *temp_cure = materias->createMateria("cure");

	jane->equip(temp_ice);	// slot 0
	jane->equip(temp_cure);	// slot 1
	std::cout << '\n';

	std::cout << " jane is using her materias" << '\n';
	jane->use(0, *enemy);
	jane->use(1, *enemy);
	std::cout << '\n';

	std::cout << "jane tried to use after unequip materia... " << std::endl;
	jane->unequip(1);
	jane->use(1, *enemy);
	std::cout << "--- NO CRASH ---\n" << std::endl;

	std::cout << " source materia tried to equip more than 4 materias " << std::endl;
	materias->learnMateria(new Cure());	// slot 2
	materias->learnMateria(new Ice());	// slot 3
	materias->learnMateria(new Ice());	// too much
	std::cout << "--- NO CRASH ---\n" << std::endl;
	std::cout << '\n';

	std::cout << " jane tried to equip more than 4 materias\n";
	jane->equip(materias->createMateria("cure"));	// slot 1
	jane->equip(materias->createMateria("cure"));	// slot 2
	jane->equip(materias->createMateria("ice"));	// slot 3
	jane->equip(materias->createMateria("cure"));	// too much
	jane->equip(materias->createMateria("ice"));	// too much
	std::cout << "--- NO CRASH ---\n" << std::endl;

	for (int i=0; i < 4 ; i++)
		jane->use(i, *enemy);

	delete jane;		// deleting character
	delete enemy;		// deleting character
	delete materias;	// deleting materia source
	delete temp_cure;	// deleting unequip materia

	return 0;
}
