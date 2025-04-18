/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:34:33 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/18 20:50:24 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::name_getter()
{
    return(this->name);
}

void Zombie::announce ()
{
    std::cout << this->name_getter() << ": Mmmmmmmmm...ashuki\n";
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}


Zombie::Zombie(){
}


Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed!\n" << std::endl;
}