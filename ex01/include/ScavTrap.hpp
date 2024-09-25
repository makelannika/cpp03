/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 00:50:48 by amakela           #+#    #+#             */
/*   Updated: 2024/09/26 00:52:58 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ~ScavTrap();

        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& obj);
        
        ScavTrap& operator=(const ScavTrap& obj);

        void    attack(const std::string& target);
        void    guardGate();
};

#endif
