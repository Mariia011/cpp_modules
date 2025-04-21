/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:43:19 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 18:59:34 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// HumanA::HumanA(std::string userType, Weapon weapon) :  //initializer list 
// {
    // 
// }

HumanA::HumanA(){}

void HumanA::set_name(std::string userName)
{
    this->name = userName;
}

const std::string&  HumanA::get_name() const
{
    return this->name;
}

void    HumanA::set_weapon(Weapon *userWeapon)
{
    
}


void HumanA::attack()
{
    std::cout << this->get_name() << " attacks with their " << this->weapon.getType();
}

~HumanA::HumanA(){}