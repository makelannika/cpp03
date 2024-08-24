/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:26 by amakela           #+#    #+#             */
/*   Updated: 2024/08/25 01:52:11 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string     name;
        unsigned int    hitPoints;
        unsigned int    energyPoints;
        unsigned int    attackDamage;

    public:
        ClapTrap();
        ClapTrap( std::string name );
        ClapTrap( const ClapTrap& obj );
        ClapTrap& operator=( const ClapTrap& obj );
        ~ClapTrap();

        void            attack( const std::string& target );
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            setAttackDamage( unsigned int amount );
        unsigned int    getAttackDamage();
};
