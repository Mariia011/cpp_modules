/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:19 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 20:57:47 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "header.hpp"
#include "./Weapon.hpp"

class HumanB{
    public:
        HumanB(std::string userType): name(userType), weapon(nullptr){}
    private: 
        std::string name; 
        Weapon*     weapon;
    public:
        void                setWeapon(Weapon&);
        void                set_name(std::string);
        const std::string&  get_name() const;
        void                attack();
};

#endif //human b