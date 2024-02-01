#include "ClapTrap.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	ClapTrap::ClapTrap()
	{
		std::cout << "Default constructor called" << std::endl;
		_hitPoints = 10;
		_energyPoints = 10;
		_attackDamage = 0;
	}

	ClapTrap::ClapTrap(std::string name)
	{
		std::cout << "Parameterized constructor called" << std::endl;
		_name = name;
		_hitPoints = 10;
		_energyPoints = 10;
		_attackDamage = 0;
	}

	ClapTrap::ClapTrap(const ClapTrap &toCopy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	ClapTrap::~ClapTrap()
	{
		std::cout << "Destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	ClapTrap&	ClapTrap::operator = (const ClapTrap &toCopy)
	{
		if (this != &toCopy)
		{
			_name = toCopy._name;
			_hitPoints = toCopy._hitPoints;
			_energyPoints = toCopy._energyPoints;
			_attackDamage = toCopy._attackDamage;
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	// code

/******** SETTER(S) ***********************************************************/

	// code

/******** HELPER(S) ***********************************************************/

	void	ClapTrap::attack(const std::string &target)
	{
		if (checkHitPoints() && checkEneryPoints())
		{
			_energyPoints--;
			std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		}
	}

	void	ClapTrap::takeDamage(unsigned int amount)
	{
		if (checkHitPoints() && checkEneryPoints())
		{
			if (amount >= _hitPoints)
				_hitPoints = 0;
			else
				_hitPoints -= amount;
			std::cout << "ClapTrap " << _name << " takes " << amount << " damage !" << std::endl;
		}
	}

	void	ClapTrap::beRepaired(unsigned int amount)
	{
		if (checkHitPoints() && checkEneryPoints())
		{
			_energyPoints--;
			std::cout << "ClapTrap " << _name << " heals " << amount << " hit points !" << std::endl;
		}
	}

	int		ClapTrap::checkHitPoints()
	{
		if (_hitPoints)
			return 1;
		std::cout << "NO HIT POINTS LEFT!" << std::endl;
		return 0;
	}

	int		ClapTrap::checkEneryPoints()
	{
		if (_energyPoints)
			return 1;
		std::cout << "NO ENERGY POINTS LEFT!" << std::endl;
		return 0;
	}
