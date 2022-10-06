#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
        std::string		name;
        int				hitPoints;
		int				energyPoints;
        int				attackDamage;
    public:

		//* CON/DECON STRUCTORS
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap (const ClapTrap &obj);
        ClapTrap(std::string name, int hitPs, int energyPs, int attackDamage);
        ~ClapTrap(void);

		//* COPY ASSIGNMENT OPERATOR
        ClapTrap &operator=(const ClapTrap &obj);
	
		//* GETTERS
        std::string getName(void);
        int         getHitPoints();
        int         getEnergyPoints();
        int         getAttackDamage();

		//* SETTERS
        void        setName(std::string name);
        void        setHitPoints(int hitPoints);
        void        setEnergyPoints(int energyPoints);
        void        setAttackDamage(int attackDamage);
	
		//* METHODES
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
