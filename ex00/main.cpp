#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Robot");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    for (int i = 0; i < 9; i++)
        clap.attack("Enemy");
    clap.attack("Enemy");
    ClapTrap clap2("Robot2");
    clap2.takeDamage(15);
    clap2.attack("Enemy");
    
    return 0;
}