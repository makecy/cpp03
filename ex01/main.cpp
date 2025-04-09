#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");

    std::cout << "\n--- Testing ClapTrap ---\n" << std::endl;
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- Testing ScavTrap ---\n" << std::endl;
    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "\n--- End of Program ---\n" << std::endl;
    return 0;
}