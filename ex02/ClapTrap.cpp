#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Claptrap"), _hp(100), _ep(50), _ad(20)
{
    std::cout << "Constructing a ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hp(100), _ep(50), _ad(20)
{
    std::cout << "Constructing a ClapTrap :" << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hp(other._hp), _ep(other._ep), _ad(other._ad)
{
    std::cout << "Copy constructing ClapTrap" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hp = other._hp;
        _ep = other._ep;
        _ad = other._ad;
        std::cout << "Assignment operator called for ClapTrap" << std::endl;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructing ClapTrap" << std::endl;
}

void ClapTrap::attack(const std::string target)
{
    if(_hp <= 0)
    {
        std::cout << _name << " can't attack he has 0hp !" << std::endl;
        return;
    }
        _ep--;
    if(_ep > 0)
    {
        std::cout << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
        _ep--;
    }
    else
        std::cout << "Not enough Energy Points !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hp > 0)
    {
        std::cout << _name << " is getting hit for " << amount << " points of damage" << std::endl;
        _hp -= amount;
    }
    else
        std::cout << _name << " is dead already leave him alone !!" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hp <= 0)
    {
        std::cout << _name << " cant repair himself he has 0hp !" << std::endl;
        return;
    }
    if(_ep > 0)
    {
        std::cout << _name << " heals for " << amount << " of hp!" << std::endl;
        _hp += amount;
        _ep--;
    }
    else
        std::cout << "Not enough Energy Points !" << std::endl;
}

const std::string& ClapTrap::getName() const { return _name; }
int ClapTrap::getHp() const { return _hp; }
int ClapTrap::getEp() const { return _ep; }
int ClapTrap::getAd() const { return _ad; }