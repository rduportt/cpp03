#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    _hp = 100;
    _ep = 100;
    _ad = 30;
    std::cout << "FragTrap default constructed" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    _hp = 100;
    _ep = 100;
    _ad = 30;
    std::cout << "FragTrap constructed: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructing FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "Assignment operator called for FragTrap" << std::endl;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_hp <= 0)
    {
        std::cout << _name << " (FragTrap) can't attack: 0 HP" << std::endl;
        return;
    }
    if (_ep <= 0)
    {
        std::cout << _name << " (FragTrap) has no energy to attack" << std::endl;
        return;
    }
    --_ep;
    std::cout << "FragTrap " << _name << " attacks " << target
              << ", causing " << _ad << " points of damage! (EP left: " << _ep << ")"
              << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}