#include "ScavTrap.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	ScavTrap::ScavTrap(void) : ClapTrap()
	{
		std::cout << "ScavTrap default constructor called" << std::endl;
		setHitPoints(100);
		setEnergyPoints(50);
		setAttackDamage(20);
	}

	ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
	{
		std::cout << "ScavTrap parameterized constructor called" << std::endl;
		setHitPoints(100);
		setEnergyPoints(50);
		setAttackDamage(20);
	}

	ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
	{
		std::cout << "ScavTrap copy constructor called" << std::endl;
	}

/******** DESTRUCTOR **********************************************************/

	ScavTrap::~ScavTrap(void)
	{
		std::cout << "ScavTrap destuctor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	ScavTrap	&ScavTrap::operator = (const ScavTrap &toCopy)
	{
		(*this).ClapTrap::operator = (toCopy);
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	ScavTrap::guardGate(void)
	{
		std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
	}

	void	ScavTrap::attack(std::string target)
	{
		if (!checkHitPoints())
		{
			std::cout << "ScavTrap " << getName() << " cant't attack." << std::endl;
			return ;
		}
		if (checkEneryPoints())
		{
			setEnergyPoints(getEnergyPoints() - 1);
			std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage !" << std::endl;
		}
		return ;
	}
