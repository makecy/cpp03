#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n=== Creating Objects ===\n" << std::endl;
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");
    FragTrap frag("Fraggy");

    std::cout << "\n=== Testing ClapTrap ===\n" << std::endl;
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== Testing ScavTrap ===\n" << std::endl;
    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "\n=== Testing FragTrap ===\n" << std::endl;
    frag.attack("Enemy");
    frag.takeDamage(50);
    frag.beRepaired(30);
    frag.highFivesGuys();

    std::cout << "\n=== Testing Construction/Destruction Order ===\n" << std::endl;
        FragTrap temp("Temporary");

    std::cout << "\n=== End of Program ===\n" << std::endl;
    return 0;
}