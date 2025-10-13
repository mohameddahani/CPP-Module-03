/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:08 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/13 10:36:14 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
    ClapTrap playerOne("Bruno");
    
    playerOne.setAttackDamage(5);
    playerOne.attack("ilyas");
    playerOne.takeDamage(2);
    playerOne.beRepaired(12);

    std::cout << "==================================================================================" << std::endl;

    ScavTrap playerTwo("ilyas");
    
    playerTwo.attack("Bruno");
    playerTwo.takeDamage(50);
    playerTwo.beRepaired(10);
    playerTwo.guardGate();

    std::cout << "==================================================================================" << std::endl;


    FragTrap playerThree("akashi");
    
    playerThree.attack("Bruno");
    playerThree.takeDamage(30);
    playerThree.beRepaired(20);
    playerThree.highFivesGuys();

    std::cout << "==================================================================================" << std::endl;

    
    DiamondTrap playerFour("Mohamed");
    
    playerFour.attack("Bruno");
    playerFour.takeDamage(20);
    playerFour.beRepaired(60);
    playerFour.guardGate();
    playerFour.highFivesGuys();
    playerFour.whoAmI();
}