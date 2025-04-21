/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:45:01 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 15:32:48 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

const std::string& getType() const 
{
    return this->type;
}

void setType(std::string userType)
{
    this->type = userType;
}