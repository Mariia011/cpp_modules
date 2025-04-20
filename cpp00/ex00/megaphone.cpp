/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 17:14:56 by marikhac          #+#    #+#             */
/*   Updated: 2025/02/26 18:08:39 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdarg>
#include <string>

#define MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

class MessagePrint{

    public:
    void print(std::string &msg)
    {
        int len = msg.length();
        for(int i = 0; i < len; ++i)
        {
            if(msg[i] >= 97 && msg[i] <= 122)
                std::cout << static_cast<char>(msg[i] - 32);
            else 
                std::cout << msg[i];
        }
    }
};

void OneArgCase()
{
    std::cout << MESSAGE << std::endl;
}

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        OneArgCase(); 
        return 0;   
    }
    MessagePrint printnoc; 
    for(int i = 1; i < argc; i++)
    {
        std::string msg(argv[i]);
        printnoc.print(msg); 
    }    
        std::cout << std::endl;
        return 0;
}