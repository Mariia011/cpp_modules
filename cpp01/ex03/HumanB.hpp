/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:19 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 17:25:38 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "header.hpp"
#include "./Weapon.hpp"

class HumanB{
    public:
        HumanB(std::string): name(userType), weapon(nullptr){}
    private: 
        std::string name; 
        Weapon*     weapon;
    public:
        void                setWeapon(std::string);
        void                set_name(std::string);
        const std::string&  get_name();
        void                attack();
};

#endif //human b