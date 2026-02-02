#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    std::cout << "ClapTrap is a ScavTrap !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ClapTrap is a ScavTrap : " << _name << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructing ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "Assignment operator called for ScavTrap" << std::endl;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap is destroyed :(" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hp <= 0)
    {
        std::cout << _name << " (ScavTrap) can't attack: 0 HP" << std::endl;
        return;
    }
    if (_ep <= 0)
    {
        std::cout << _name << " (ScavTrap) has no energy to attack" << std::endl;
        return;
    }
    --_ep;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _ad << " points of damage! (EP left: " << _ep << ")"
              << std::endl;
}