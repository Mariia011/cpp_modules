/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:33:34 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/20 15:36:49 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if(N <= 0 )
        return NULL;
    Zombie *horde;
    
    horde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        horde[i].set_name(name); 
    }
    return horde;  
}