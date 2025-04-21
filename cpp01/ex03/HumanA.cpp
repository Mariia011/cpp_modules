/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:43:19 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 20:59:33 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

HumanA::HumanA(){}

void HumanA::set_name(std::string userName)
{
    this->name = userName;
}

const std::string&  HumanA::get_name() const
{
    return this->name;
}

void    HumanA::setWeapon(const Weapon& userWeapon)
{
    this->weapon = userWeapon;
}


void HumanA::attack()
{
    std::cout << this->get_name() << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(){}