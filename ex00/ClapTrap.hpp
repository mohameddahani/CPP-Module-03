/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:45 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/11 16:32:52 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
class ClapTrap{
    // ! private
    private:
        std::string name;
        unsigned int hitPoints = 10;
        unsigned int energyPoints = 10;
        unsigned int attackDamage = 0;

    // ! public
    public:
        // * Default constructor
        ClapTrap(const std::string name);

        // * Copy constructor
        ClapTrap(const ClapTrap &other);

        // * Copy assignment operator
        ClapTrap &operator=(const ClapTrap &other);

        // * Destructor
        ~ClapTrap();

        // * Setters & Getters
        void setName(const std::string value);
        void setHitPoints(const unsigned int value);
        void setEnergyPoints(const unsigned int value);
        void setAttackDamage(const unsigned int value);

        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;

        // * Methods
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
