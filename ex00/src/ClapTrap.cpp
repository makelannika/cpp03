/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:48 by amakela           #+#    #+#             */
/*   Updated: 2024/08/26 00:26:49 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
    std::cout << "Custom constructor called" << std::endl;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj) {
        name = obj.name;
        hitPoints = obj.hitPoints;
        energyPoints = obj.energyPoints;
        attackDamage = obj.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints) {
        if (energyPoints) {
            energyPoints--;
            std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
            << attackDamage << " points of damage!" << std::endl;
        } else
            std::cout << "ClapTrap " << name << " has no energy to attack" << std::endl;
    } else
        std::cout << "ClapTrap " << name << " is dead and can't attack anymore" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints) {
        if (hitPoints <= amount) {
            hitPoints = 0;
            std::cout << "ClapTrap " << name << " was attacked and died :(" << std::endl;
        } else {
            hitPoints -= amount;
            std::cout << "ClapTrap " << name << " was attacked "
            "and lost " << amount << " points of health!" << std::endl;
        }
    } else
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints) {
        if (energyPoints) {
            energyPoints--;
            hitPoints += amount;
            std::cout << "ClapTrap " << name << " regained "
            << amount << " points of health!" << std::endl;
        } else
            std::cout << "ClapTrap " << name << " has no energy to repair itself" << std::endl;
    } else
        std::cout << "ClapTrap " << name << " is dead and can't be repaired anymore" << std::endl;
}

void    ClapTrap::setAttackDamage(unsigned int amount) {
    attackDamage = amount;
}

unsigned int    ClapTrap::getAttackDamage() {
    return (attackDamage);
}
