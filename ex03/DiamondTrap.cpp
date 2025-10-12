/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:31:03 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/12 19:09:35 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
DiamondTrap::DiamondTrap(): ClapTrap("unknown_clap_name"){
    // ! We use the initializer list only to call the ClapTrap constructor.
    // ! The inherited members (name, hitPoints, etc.) belong to ClapTrap,
    // ! so we can’t initialize them directly here — only through the base constructor..
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;

    std::cout << "Default constructor of DiamondTrap is called" << std::endl;
}

// * Parametrised constructor with initializer list
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"){
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "DiamondTrap " << getName() << " is created" << std::endl;
}

// * Copy constructor with initializer list
DiamondTrap::DiamondTrap(const DiamondTrap &other){
    // ! The inherited members (name, hitPoints, etc.) belong to ClapTrap,
    // ! so we can’t initialize them directly here — only through the base constructor.
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "Copy assignment operator called" << std::endl;
    
    return *this;
}

// * Destructor
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << getName() << " is destroyed" << std::endl; 
}

// * Methods