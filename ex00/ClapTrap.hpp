#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream>
#include <string>

class ClapTrap
{
    private :
        std::string _name;
        int _hp;
        int _ep;
        int _ad;
    public :
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        void attack(const std::string target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        const std::string& getName() const;
        int getHp() const;
        int getEp() const;
        int getAd() const;
};

#endif