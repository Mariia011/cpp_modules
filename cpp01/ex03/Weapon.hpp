/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:27 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/20 21:22:56 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
    public:
        Weapon();
        ~Weapon();
    private:
        std::string type;
    public:
        const std::string & getType();
        void setType(std::string);
};

#endif