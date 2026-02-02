#include "ClapTrap.hpp"

int main()
{
    ClapTrap noname;

    std::cout << "noname: " << noname.getName() << std::endl;

    ClapTrap clap("Clappy");
    
    std::cout << "clap: " << clap.getName()
                << " HP=" << clap.getHp()
                << " EP=" << clap.getEp()
                << " AD=" << clap.getAd() << std::endl;

    clap.attack("Enemy 1");
    std::cout << "EP after attack: " << clap.getEp() << std::endl;

    clap.takeDamage(3);
    std::cout << "HP after damage: " << clap.getHp() << std::endl;

    clap.beRepaired(1);
    std::cout << "HP after repair: " << clap.getHp() << std::endl;
    clap.takeDamage(10);
    clap.attack("Enemy 1");
    
}