/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:45:01 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 20:02:03 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Weapon::Weapon() {}

const std::string& Weapon::getType() const 
{
    return this->type;
}

void Weapon::setType(std::string userType)
{
    this->type = userType;
}

Weapon::~Weapon() {}
