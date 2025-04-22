/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:12:20 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/22 19:13:40 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool check_argc(int argc, char**argv)
{
    if(argc != ARG_COUNT)
        return 1;
    
    for(int i = 1; i < ARG_COUNT; i++)
    {
                    
    }               

}

// std::string rename_file(const std::string& line, const std::string& s1, const std::string& s2) {
//     std::string new_file;
//     int pos = 0;
//     int found;

//     while ((found = line.find(s1, pos)) != std::string::npos) {
//         new_file += line.substr(pos, found - pos);  // text before match
//         new_file += s2;                             // replacement
//         pos = found + s1.length();                // move past match
//     }

//     new_file += line.substr(pos);
//     return new_file;
// } //ne kruto

int main(int argc, char **argv)
{
    if (!check_argc(argc))
        return 0;
    
    std::string filename = argv[1];
    std::string new_file = argv[1];
    // std::string new_file = rename_file();
    std::ifstream infile(filename);
    std::ofstream outfile(new_file);
    
    while (infile.good() && ) 
    {
        std::getline(infile);
        
    }
    
    infile.close();
    return 0;
}