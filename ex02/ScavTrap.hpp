/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:28:20 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/12 14:05:24 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// * Includes
#include <iostream>
#include "ClapTrap.hpp"

// * Class With Orthodox Canonical Form
class ScavTrap: public ClapTrap{
    // ! public
    public:
        // * Default constructor
        ScavTrap();

        // * Parametrised constructor
        ScavTrap(const std::string name);

        // * Copy constructor
        ScavTrap(const ScavTrap &other);

        // * Copy assignment operator
        ScavTrap &operator=(const ScavTrap &other);

        // * Destructor
        ~ScavTrap();

        // * Methods
        void attack(const std::string &target);
        void guardGate();
};

#endif
