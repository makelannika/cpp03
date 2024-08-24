/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:11 by amakela           #+#    #+#             */
/*   Updated: 2024/08/25 02:08:25 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main() {
    ClapTrap rob("Rob");
    ClapTrap bobby("Bobby");
    ClapTrap alsoRob(rob);

    alsoRob = rob;

    alsoRob.setAttackDamage(4);
    bobby.setAttackDamage(5);

    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());
    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());
    bobby.beRepaired(2);
    bobby.attack("Rob");
    alsoRob.takeDamage(bobby.getAttackDamage());
    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());
    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());
    alsoRob.attack("Bobby");
    bobby.takeDamage(alsoRob.getAttackDamage());

    return (0);
}
