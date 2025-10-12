/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:28:26 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/12 11:31:09 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
ScavTrap::ScavTrap(): ClapTrap("unknown"){
    // ! You can't use an initializer list here because these members belong to ClapTrap, 
    // ! not to ScavTrap. ScavTrap only inherits them from the base class.
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << "Default constructor called" << std::endl;
}

// * Parametrised constructor with initializer list
ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    // ! You can't use an initializer list here because these members belong to ClapTrap, 
    // ! not to ScavTrap. ScavTrap only inherits them from the base class.
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << "ScavTrap " << getName() << " is created" << std::endl;
}

// * Copy constructor with initializer list
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other.name){
    // ! You can't use an initializer list here because these members belong to ClapTrap, 
    // ! not to ScavTrap. ScavTrap only inherits them from the base class.
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
void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
