/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AwesomePhonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:12:29 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/25 18:43:39 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
	std::string input = "";
	PhoneBook phoneBook;
	while(input != EXIT)
	{
		std::cout << "prompt: ";
		getline(std::cin, input);
		if (input == ADD)
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