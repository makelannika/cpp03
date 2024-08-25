/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:13:12 by amakela           #+#    #+#             */
/*   Updated: 2024/08/26 02:27:08 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap custom constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name <<  " is now in gatekeeper mode" << std::endl;
}
