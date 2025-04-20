/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:10 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/20 21:23:43 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "header.h"
#include "./Weapon.hpp"

class HumanA{
    public:
        HumanA();
        HumanA(std::string, Weapon);
        ~HumanA();
    private: 
        std::string name; 
        Weapon      weapon;
    public:
        void set_name(std::string);
        const std::string& get_name();
        void attack();
};

#endif //human a