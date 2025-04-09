#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
    if (this != &assign)
    {
        this->_name = assign._name;
        this->_hitPoints = assign._hitPoints;
        this->_energyPoints = assign._energyPoints;
        this->_attackDamage = assign._attackDamage;
    }
    return *this;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy points left!" << std::endl;
        return;
    }
    if (this->_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot attack!" << std::endl;
        return;
    }
    
    this->_energyPoints--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target 
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}