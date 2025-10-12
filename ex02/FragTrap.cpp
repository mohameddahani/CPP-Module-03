/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:06:36 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/12 13:21:44 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
FragTrap::FragTrap(): ClapTrap("unknown"){
    // ! You can't use an initializer list here because these members belong to ClapTrap, 
    // ! not to FragTrap. FragTrap only inherits them from the base class.
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "Default constructor called" << std::endl;
}

// * Parametrised constructor with initializer list
FragTrap::FragTrap(std::string name){
    // ! You can't use an initializer list here because these members belong to ClapTrap, 
    // ! not to FragTrap. FragTrap only inherits them from the base class.
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "FragTrap " << getName() << " is created" << std::endl;
}

// * Copy constructor with initializer list
FragTrap::FragTrap(const FragTrap &other){
    // ! You can't use an initializer list here because these members belong to ClapTrap, 
    // ! not to FragTrap. FragTrap only inherits them from the base class.
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

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
