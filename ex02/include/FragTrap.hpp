/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:31:14 by amakela           #+#    #+#             */
/*   Updated: 2024/09/27 00:24:45 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        ~FragTrap();
        
        FragTrap(std::string name);
        FragTrap(const FragTrap& obj);

        FragTrap& operator=(const FragTrap& obj);

        void    attack(const std::string& target) override;
        void    highFivesGuys(void);
};

#endif
