/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AwesomePhonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:12:29 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/23 20:19:04 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
	std::string input = "";
	PhoneBook phoneBook;
	std::cout << "prompt: ";
	while(std::cin >> input)
	{
		std::cout << "prompt: ";
		if (input == EXIT)
			break ;
		else if (input == ADD)
		{
			Contact contact; 
			contact.contact_setter();
			phoneBook.add(contact);
		}
		else if (input == SEARCH)
		{
			phoneBook.search();
		}
	} 	
	return 0;
}