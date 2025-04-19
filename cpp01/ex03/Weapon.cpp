/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:29:16 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/19 19:48:44 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string & Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string userType)
{
    this->type = userType;
}