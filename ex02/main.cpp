/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:08 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/12 19:02:20 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    ClapTrap playerOne("Bruno");
    
    playerOne.setAttackDamage(5);
    playerOne.attack("ilyas");
    playerOne.takeDamage(2);
    playerOne.beRepaired(12);

    std::cout << "==================================================================================" << std::endl;

    FragTrap playerTwo("ilyas");
    
    playerTwo.attack("Bruno");
    playerTwo.takeDamage(50);
    playerTwo.beRepaired(10);
    playerTwo.highFivesGuys();
}