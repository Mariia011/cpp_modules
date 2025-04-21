/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:44:29 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 20:58:09 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// void HumanB::setWeapon(Weapon* userWeapon)
// {
    // this->weapon = userWeapon;
// }

void HumanB::setWeapon(Weapon& userWeapon)
{
    this->weapon = &userWeapon;
}

void HumanB::set_name(std::string userType)
{
    this->name = userType;
}

const std::string&  HumanB::get_name() const
{
    return this->name;
}

void HumanB::attack()
{
    if (this->weapon) {
        std::cout << this->get_name() << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->get_name() << " has no weapon to attack with!" << std::endl;
    }
}