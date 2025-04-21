/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:27 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/21 20:37:10 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "header.hpp"

class Weapon {
    public:
        Weapon();
        Weapon(std::string userType) : type(userType){}
        ~Weapon();
    private:
        std::string type;
    public:
        const std::string& getType() const;
        void               setType(std::string);
};

#endif