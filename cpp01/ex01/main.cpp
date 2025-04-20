/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:34:37 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/20 15:54:31 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int ZombieNum = 4;
    Zombie *horde = zombieHorde(ZombieNum, "Mashuki");
    if(horde)
    {
        for(int i = 0; i < ZombieNum; ++i)
            horde[i].announce();
    }
    delete[] horde; 
    return 0;
}