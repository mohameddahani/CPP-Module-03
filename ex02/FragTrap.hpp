/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:06:41 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/12 13:19:48 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// * Includes
#include <iostream>
#include "ClapTrap.hpp"

// * Class With Orthodox Canonical Form
class FragTrap: public ClapTrap{
    // ! public
    public:
        // * Default constructor
        FragTrap();

        // * Parametrised constructor
        FragTrap(const std::string name);

        // * Copy constructor
        FragTrap(const FragTrap &other);

        // * Copy assignment operator
        FragTrap &operator=(const FragTrap &other);

        // * Destructor
        ~FragTrap();

        // * Methods
        void highFivesGuys(void);
};

#endif