/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:48 by amakela           #+#    #+#             */
/*   Updated: 2024/08/25 02:07:12 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
    std::cout << "Custom constructor called" << std::endl;
    this -> hitPoints = 10;
    this -> energyPoints = 10;
    this -> attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& obj ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& obj ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj) {
        this -> name = obj.name;
        this -> hitPoints = obj.hitPoints;
        this -> energyPoints = obj.energyPoints;
        this -> attackDamage = obj.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints && energyPoints) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " 
        << target << ", causing " << attackDamage
        << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (!hitPoints)
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
    else {
        if (this -> hitPoints <= amount) {
            this -> hitPoints = 0;
            std::cout << "ClapTrap " << name << " was attacked and died :(" << std::endl;
        } else {
            this -> hitPoints -= amount;
            std::cout << "ClapTrap " << name << " was attacked "
            "and lost " << amount << " points of health!" << std::endl;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints && energyPoints) {
        energyPoints--;
        this -> hitPoints += amount;
        std::cout << "ClapTrap " << name << " regained "
        << amount << " points of health!" << std::endl;
    }
}

void    ClapTrap::setAttackDamage( unsigned int amount ) {
    this -> attackDamage = amount;
}

unsigned int    ClapTrap::getAttackDamage() {
    return (this -> attackDamage);
}
