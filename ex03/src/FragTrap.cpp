/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:31:03 by amakela           #+#    #+#             */
/*   Updated: 2024/08/26 12:56:11 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap custom constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& obj) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& obj) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return (*this);
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints) {
        if (energyPoints) {
            energyPoints--;
            std::cout << "FragTrap " << name << " attacks " << target << ", causing "
            << attackDamage << " points of damage!" << std::endl;
        } else
            std::cout << "FragTrap " << name << " has no energy to attack" << std::endl;
    } else
        std::cout << "FragTrap " << name << " is dead and can't attack anymore" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << ": High fives guys? :)" << std::endl;
}
