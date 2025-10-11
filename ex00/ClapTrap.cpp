/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:11:02 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/11 17:19:54 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor with initializer list
ClapTrap::ClapTrap(std::string name): name(name){}

// * Copy constructor with initializer list
ClapTrap::ClapTrap(const ClapTrap &other): name(other.name), hitPoints(other.hitPoints),
                    energyPoints(other.energyPoints), attackDamage(other.attackDamage){}

// * Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

// * Destructor
ClapTrap::~ClapTrap(){}

// * Setters & Getters
void ClapTrap::setName(const std::string value){
    this->name = value;
}

void ClapTrap::setHitPoints(const unsigned int value){
    this->hitPoints = value;
}

void ClapTrap::setEnergyPoints(const unsigned int value){
    this->energyPoints = value;
}

void ClapTrap::setAttackDamage(const unsigned int value){
    this->attackDamage = value;
}

std::string ClapTrap::getName() const{
    return this->name;
}

unsigned int ClapTrap::getHitPoints() const{
    return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const{
    return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const{
    return this->attackDamage;
}
