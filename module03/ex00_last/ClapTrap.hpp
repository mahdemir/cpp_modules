/******** DEFINES *************************************************************/
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

/******** INCLUDES ************************************************************/

	#include <iostream>

/******** CLASSES *************************************************************/

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &toCopy);
	~ClapTrap();

	ClapTrap& operator = (const ClapTrap &toCopy);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	int		checkHitPoints();
	int		checkEneryPoints();
};

/******** PROTOTYPE(S) ********************************************************/

	// code

#endif // CLAPTRAP_HPP
