/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AwesomePhonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:12:29 by marikhac          #+#    #+#             */
/*   Updated: 2025/03/10 18:59:18 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
	std::string input = "";
	PhoneBook phoneBook;
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
		// else if (input == SEARCH)
		// {
		// 	phoneBook.search();
		// }
	} 	
	return 0;
}