/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:06:36 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/13 18:38:53 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
FragTrap::FragTrap(): ClapTrap("unknown"){
    // ! We use the initializer list only to call the ClapTrap constructor.
    // ! The inherited members (name, hitPoints, etc.) belong to ClapTrap,
    // ! so we can’t initialize them directly here — only through the base constructor.
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "Default constructor of FragTrap is called" << std::endl;
}

// * Parametrised constructor with initializer list
FragTrap::FragTrap(std::string name): ClapTrap(name){
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "FragTrap " << getName() << " is created" << std::endl;
}

// * Copy constructor with initializer list
FragTrap::FragTrap(const FragTrap &other): ClapTrap(other){
    // ! The inherited members (name, hitPoints, etc.) belong to ClapTrap,
    // ! so we can’t initialize them directly here — only through the base constructor.

    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
FragTrap &FragTrap::operator=(const FragTrap &other){
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "Copy assignment operator called" << std::endl;
    
    return *this;
}

// * Destructor
FragTrap::~FragTrap(){
    std::cout << "FragTrap " << getName() << " is destroyed" << std::endl; 
}

// * Methods
void FragTrap::highFivesGuys(){
    std::cout << "ScavTrap " << getName() << " requests a positive high five! 🙌" << std::endl;
}
