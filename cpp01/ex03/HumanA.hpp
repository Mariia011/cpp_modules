/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:10 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 20:51:05 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "header.hpp"
#include "./Weapon.hpp"

class HumanA{
    public:
        HumanA();
        ~HumanA();
        HumanA(std::string userName, Weapon& userWeapon) : name(userName), weapon(userWeapon){}
    private: 
        std::string name; 
        Weapon      weapon;
    public:
        void                set_name(std::string);
        void                setWeapon(const Weapon& userWeapon);
        const std::string&  get_name() const;
        void                attack();
};

#endif //human a