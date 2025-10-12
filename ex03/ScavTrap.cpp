/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:28:26 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/12 18:36:23 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
ScavTrap::ScavTrap(): ClapTrap("unknown"){
    // ! We use the initializer list only to call the ClapTrap constructor.
    // ! The inherited members (name, hitPoints, etc.) belong to ClapTrap,
    // ! so we can’t initialize them directly here — only through the base constructor.
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << "Default constructor called" << std::endl;
}

// * Parametrised constructor with initializer list
ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << "ScavTrap " << getName() << " is created" << std::endl;
}

// * Copy constructor with initializer list
ScavTrap::ScavTrap(const ScavTrap &other){
    // ! The inherited members (name, hitPoints, etc.) belong to ClapTrap,
    // ! so we can’t initialize them directly here — only through the base constructor.
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "Copy assignment operator called" << std::endl;
    
    return *this;
}

// * Destructor
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << getName() << " is destroyed" << std::endl; 
}

// * Methods
void ScavTrap::attack(const std::string &target){
    if (getHitPoints() == 0){
        std::cout << "ScavTrap " << getName() << " can't attack because it's dead!" << std::endl;
        return;
    }
    if (getEnergyPoints() == 0){
        std::cout << "ScavTrap " << getName() << " has no energy left to attack!" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "ScavTrap " << getName() << " attacks " << target
              << ", causing " << getAttackDamage() 
              << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
