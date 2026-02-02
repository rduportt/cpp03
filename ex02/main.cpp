#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap f1("Fragger");
    std::cout << "frag: " << f1.getName()
                << " HP=" << f1.getHp()
                << " EP=" << f1.getEp()
                << " AD=" << f1.getAd() << std::endl;
    f1.attack("Target A");
    f1.highFivesGuys();
    
}