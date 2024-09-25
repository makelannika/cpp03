/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:11 by amakela           #+#    #+#             */
/*   Updated: 2024/09/26 01:52:07 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main() {
    ClapTrap bobby("Bobby");
    ScavTrap sally("Sally");
    FragTrap fred("Fred");
    FragTrap alsoFred(fred);
    std::cout << std::endl;

    bobby.attack("Sally");
    sally.takeDamage(0);
    std::cout << std::endl;

    bobby.beRepaired(15);
    sally.attack("Bobby");
    bobby.takeDamage(20);
    std::cout << std::endl;

    fred.highFivesGuys();
    std::cout << std::endl;
    
    sally.attack("Fred");
    fred.takeDamage(20);
    std::cout << std::endl;

    fred.beRepaired(20);
    std::cout << std::endl;

    sally.guardGate();
    fred.attack("Sally");
    sally.takeDamage(30);
    fred.attack("Sally");
    sally.takeDamage(30);
    fred.attack("Sally");
    sally.takeDamage(30);
    fred.attack("Sally");
    sally.takeDamage(30);
    std::cout << std::endl;
    
    return (0);
}
