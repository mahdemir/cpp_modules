# C➕➕

Modules   | Topics
 -------- | --------
Module 00 | Namespaces, classes, member functions, stdio streams, initialization lists, static, const, etc.
Module 01 | Memory allocation, pointers to members, references, switch statement
Module 02 | Ad-hoc polymorphism, operator overloading, Orthodox Canonical class form
Module 03 | Inheritance
Module 04 | Subtype polymorphism, abstract classes, interfaces
Module 05 | Repetition and exceptions
Module 06 | C++ casts
Module 07 | C++ templates
Module 08 & 09 | Templated containers, iterators, algorithms

## 🌳 Folder structure
```
.
├── README.md
├── module00
│   ├── ex00
│   │   ├── Makefile
│   │   └── megaphone.cpp
│   ├── ex01
│   │   ├── Makefile
│   │   ├── inc
│   │   │   ├── Contact.hpp
│   │   │   └── PhoneBook.hpp
│   │   └── src
│   │       ├── Contact.cpp
│   │       ├── PhoneBook.cpp
│   │       └── main.cpp
│   └── ex02
│       ├── Account.cpp
│       ├── Account.hpp
│       ├── Makefile
│       └── tests.cpp
├── module01
│   ├── ex00
│   │   ├── Makefile
│   │   ├── Zombie.cpp
│   │   ├── Zombie.hpp
│   │   ├── main.cpp
│   │   ├── newZombie.cpp
│   │   └── randomChump.cpp
│   ├── ex01
│   │   ├── Makefile
│   │   ├── Zombie.cpp
│   │   ├── Zombie.hpp
│   │   ├── main.cpp
│   │   └── zombieHorde.cpp
│   ├── ex02
│   │   ├── Makefile
│   │   └── main.cpp
│   ├── ex03
│   │   ├── HumanA.cpp
│   │   ├── HumanA.hpp
│   │   ├── HumanB.cpp
│   │   ├── HumanB.hpp
│   │   ├── Makefile
│   │   ├── Weapon.cpp
│   │   ├── Weapon.hpp
│   │   └── main.cpp
│   ├── ex04
│   │   ├── Makefile
│   │   ├── infile
│   │   └── main.cpp
│   ├── ex05
│   │   ├── Harl.cpp
│   │   ├── Harl.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   └── ex06
│       ├── Harl.cpp
│       ├── Harl.hpp
│       ├── Makefile
│       └── main.cpp
├── module02
│   ├── ex00
│   │   ├── Fixed.cpp
│   │   ├── Fixed.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   ├── ex01
│   │   ├── Fixed.cpp
│   │   ├── Fixed.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   ├── ex02
│   │   ├── Fixed.cpp
│   │   ├── Fixed.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   └── ex03
│       ├── Fixed.cpp
│       ├── Fixed.hpp
│       ├── Makefile
│       ├── Point.cpp
│       ├── Point.hpp
│       ├── bsp.cpp
│       └── main.cpp
├── module03
│   ├── ex00
│   │   ├── ClapTrap.cpp
│   │   ├── ClapTrap.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   ├── ex01
│   │   ├── ClapTrap.cpp
│   │   ├── ClapTrap.hpp
│   │   ├── Makefile
│   │   ├── ScavTrap.cpp
│   │   ├── ScavTrap.hpp
│   │   └── main.cpp
│   ├── ex02
│   │   ├── ClapTrap.cpp
│   │   ├── ClapTrap.hpp
│   │   ├── FragTrap.cpp
│   │   ├── FragTrap.hpp
│   │   ├── Makefile
│   │   ├── ScavTrap.cpp
│   │   ├── ScavTrap.hpp
│   │   └── main.cpp
│   └── ex03
│       ├── ClapTrap.cpp
│       ├── ClapTrap.hpp
│       ├── DiamondTrap.cpp
│       ├── DiamondTrap.hpp
│       ├── FragTrap.cpp
│       ├── FragTrap.hpp
│       ├── Makefile
│       ├── ScavTrap.cpp
│       ├── ScavTrap.hpp
│       └── main.cpp
├── module04
│   ├── ex00
│   │   ├── Animal.cpp
│   │   ├── Animal.hpp
│   │   ├── Cat.cpp
│   │   ├── Cat.hpp
│   │   ├── Dog.cpp
│   │   ├── Dog.hpp
│   │   ├── Makefile
│   │   ├── WrongAnimal.cpp
│   │   ├── WrongAnimal.hpp
│   │   ├── WrongCat.cpp
│   │   ├── WrongCat.hpp
│   │   └── main.cpp
│   ├── ex01
│   │   ├── Animal.cpp
│   │   ├── Animal.hpp
│   │   ├── Brain.cpp
│   │   ├── Brain.hpp
│   │   ├── Cat.cpp
│   │   ├── Cat.hpp
│   │   ├── Dog.cpp
│   │   ├── Dog.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   ├── ex02
│   │   ├── Animal.cpp
│   │   ├── Animal.hpp
│   │   ├── Brain.cpp
│   │   ├── Brain.hpp
│   │   ├── Cat.cpp
│   │   ├── Cat.hpp
│   │   ├── Dog.cpp
│   │   ├── Dog.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   └── ex03
│       ├── AMateria.cpp
│       ├── AMateria.hpp
│       ├── Character.cpp
│       ├── Character.hpp
│       ├── Cure.cpp
│       ├── Cure.hpp
│       ├── ICharacter.hpp
│       ├── IMateriaSource.hpp
│       ├── Ice.cpp
│       ├── Ice.hpp
│       ├── Makefile
│       ├── MateriaSource.cpp
│       ├── MateriaSource.hpp
│       └── main.cpp
├── module05
│   ├── ex00
│   │   ├── Bureaucrat.cpp
│   │   ├── Bureaucrat.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   ├── ex01
│   │   ├── Bureaucrat.cpp
│   │   ├── Bureaucrat.hpp
│   │   ├── Form.cpp
│   │   ├── Form.hpp
│   │   ├── Makefile
│   │   └── main.cpp
│   ├── ex02
│   │   ├── AForm.cpp
│   │   ├── AForm.hpp
│   │   ├── Bureaucrat.cpp
│   │   ├── Bureaucrat.hpp
│   │   ├── Makefile
│   │   ├── PresidentialPardonForm.cpp
│   │   ├── PresidentialPardonForm.hpp
│   │   ├── RobotomyRequestForm.cpp
│   │   ├── RobotomyRequestForm.hpp
│   │   ├── ShrubberyCreationForm.cpp
│   │   ├── ShrubberyCreationForm.hpp
│   │   └── main.cpp
│   └── ex03
│       ├── AForm.cpp
│       ├── AForm.hpp
│       ├── Bureaucrat.cpp
│       ├── Bureaucrat.hpp
│       ├── Intern.cpp
│       ├── Intern.hpp
│       ├── Makefile
│       ├── PresidentialPardonForm.cpp
│       ├── PresidentialPardonForm.hpp
│       ├── RobotomyRequestForm.cpp
│       ├── RobotomyRequestForm.hpp
│       ├── ShrubberyCreationForm.cpp
│       ├── ShrubberyCreationForm.hpp
│       └── main.cpp
├── module06
│   ├── ex00
│   │   ├── Makefile
│   │   ├── ScalarConverter.cpp
│   │   ├── ScalarConverter.hpp
│   │   └── main.cpp
│   ├── ex01
│   │   ├── Data.hpp
│   │   ├── Makefile
│   │   ├── Serializer.cpp
│   │   ├── Serializer.hpp
│   │   └── main.cpp
│   └── ex02
│       ├── A.hpp
│       ├── B.hpp
│       ├── Base.hpp
│       ├── C.hpp
│       ├── Makefile
│       └── main.cpp
├── module07
│   ├── ex00
│   │   ├── Makefile
│   │   ├── main.cpp
│   │   └── whatever.hpp
│   ├── ex01
│   │   ├── Makefile
│   │   ├── iter.hpp
│   │   └── main.cpp
│   └── ex02
│       ├── Array.hpp
│       ├── Array.tpp
│       ├── Makefile
│       └── main.cpp
├── module08
│   ├── ex00
│   │   ├── Makefile
│   │   ├── easyfind.hpp
│   │   └── main.cpp
│   ├── ex01
│   │   ├── Makefile
│   │   ├── Span.cpp
│   │   ├── Span.hpp
│   │   └── main.cpp
│   └── ex02
│       ├── Makefile
│       ├── MutantStack.hpp
│       ├── MutantStack.tpp
│       └── main.cpp
└── module09
    ├── ex00
    │   ├── BitcoinExchange.cpp
    │   ├── BitcoinExchange.hpp
    │   ├── Makefile
    │   ├── data.csv
    │   ├── input.csv
    │   └── main.cpp
    ├── ex01
    │   ├── Makefile
    │   ├── RPN.cpp
    │   ├── RPN.hpp
    │   └── main.cpp
    └── ex02
        ├── Makefile
        ├── PmergeMe.hpp
        └── main.cpp

```
