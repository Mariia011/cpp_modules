/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:19 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/20 19:44:48 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "header.h"

class HumanB{
    public:
        HumanB();
        ~HumanB();
    private: 
        std::string name; 
        Weapon      weapon;
    public:
        void                setWeapon(std::string);
        void                set_name(std::string);
        const std::string&  get_name();
        void                attack();
};

#endif //human b