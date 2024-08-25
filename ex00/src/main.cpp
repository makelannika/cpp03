/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:11 by amakela           #+#    #+#             */
/*   Updated: 2024/08/26 00:19:42 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main() {
    ClapTrap rob("Rob");
    ClapTrap bobby("Bobby");
    ClapTrap alsoRob = rob;
    std::cout << std::endl;

    alsoRob.setAttackDamage(2);
    bobby.setAttackDamage(8);

    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());
    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());
    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());
    std::cout << std::endl;

    bobby.beRepaired(6);
    bobby.attack("Rob");
    alsoRob.takeDamage(bobby.getAttackDamage());
    std::cout << std::endl;

    alsoRob.beRepaired(2);
    alsoRob.beRepaired(2);
    alsoRob.beRepaired(2);
    alsoRob.beRepaired(2);
    std::cout << std::endl;

    bobby.attack("Rob");
    alsoRob.takeDamage(bobby.getAttackDamage());
    std::cout << std::endl;

    alsoRob.beRepaired(2);
    alsoRob.beRepaired(2);
    alsoRob.beRepaired(2);
    alsoRob.beRepaired(2);
    alsoRob.attack("Bobby");
    std::cout << std::endl;

    bobby.attack("Rob");
    alsoRob.takeDamage(bobby.getAttackDamage());
    bobby.attack("Rob");
    alsoRob.takeDamage(bobby.getAttackDamage());
    std::cout << std::endl;

    return (0);
}
