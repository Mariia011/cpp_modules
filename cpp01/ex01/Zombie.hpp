/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:47 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/20 18:10:49 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    public:
        Zombie();
        Zombie(std::string name);

        ~Zombie();
        void announce();
        void set_name(std::string);
        std::string name_getter();
    private: 
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif //ZOMBIE_HPP