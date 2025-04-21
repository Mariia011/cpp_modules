/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:44:29 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 17:25:19 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void HumanB::setWeapon(std::string userType)
{
    
}

void HumanB::set_name(std::string userType)
{
    this->name = userType;
}

const std::string&  HumanB::get_name()
{
    return this->name;
}

void HumanB::attack()
{
    std::cout << this->get_name() << " attacks with their " << this->weapon.getType();
}