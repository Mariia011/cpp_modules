/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 17:14:56 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/25 15:41:18 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

#define MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

class MessagePrint{
    public:
        void print(std::string&);
};

void MessagePrint::print(std::string &msg)
{
    int len = msg.length();
    for(int i = 0; i < len; ++i)
    {
        if(msg[i] >= 97 && msg[i] <= 122)
            std::cout << static_cast<char>(std::toupper(msg[i]));
        else 
            std::cout << msg[i];
    }
}

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
    MessagePrint userMessage; 
    for(int i = 1; i < argc; i++)
    {
        std::string msg(argv[i]);
        userMessage.print(msg);
    }
        std::cout << std::endl;
        return 0;
}