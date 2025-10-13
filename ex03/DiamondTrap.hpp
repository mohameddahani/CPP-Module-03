/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:30:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/13 10:33:57 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

// * Includes
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// * Class With Orthodox Canonical Form
// ! Multiple Inheritance
class DiamondTrap: public ScavTrap, public FragTrap {
    // ! private
    private:
        std::string name;
    
    // ! public
    public:
        // * Default constructor
        DiamondTrap();

        // * Parametrised constructor
        DiamondTrap(const std::string name);

        // * Copy constructor
        DiamondTrap(const DiamondTrap &other);

        // * Copy assignment operator
        DiamondTrap &operator=(const DiamondTrap &other);

        // * Destructor
        ~DiamondTrap();

        // * Methods
        using ScavTrap::attack;
        void whoAmI();
};

#endif