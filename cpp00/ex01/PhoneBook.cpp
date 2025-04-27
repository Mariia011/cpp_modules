/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:22:03 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/27 16:17:59 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

PhoneBook::PhoneBook()
{	
	this->i = 0;
}

PhoneBook::~PhoneBook(){}

PhoneBook::PhoneBook(const PhoneBook&){}

void PhoneBook::add_helper(const Contact& contact)
{
	// Contact tmp = contact;
	
	// for(int i = CONTACT_MAX - 1; i > 0; --i)
	// {
	// 	Contact shift = this->contact_arr[i];
	// 	this->contact_arr[i] = this->contact_arr[CONTACT_MAX - 1];
	// 	this->contact_arr[CONTACT_MAX - 1] = shift;
	// }
	// contact_arr[this->i] = tmp;
	
}

void PhoneBook::add(const Contact& contact)
{
	if(this->i == CONTACT_MAX)
	{
		this->add_helper(contact);
		return;
	}
	this->contact_arr[this->i++] = contact;
}

int PhoneBook::is_format_correct(const std::string input)
{		
    if (!input.empty() && input.size() == 1 && ( input[0] >= '1' && input[0] <= '8'))
    {
        int index = input[0] - '0';
        return index;
    }
    return 0;
}

std::string PhoneBook::format_display(const std::string& SearchInfo) const
{
	std::string copy = SearchInfo;
	if(copy.length() > 10)
	{
		copy.resize(10);
		copy[9] = '.';
	}
	return copy;
}

void PhoneBook::search_display(const Contact& contact, int number)
{
	if(!contact.get_first_name().empty())
	{
		std::cout << "|" << number << "|" << format_display(contact.get_first_name()) << "|" << format_display(contact.get_last_name()) << "|" << format_display(contact.get_nickname());
		std::cout << "|" << format_display(contact.get_phone_number()) << "|" << format_display(contact.get_darkest_secret()) << "\n";
	}
	else
		display_all_contacts();
}

void PhoneBook::display_all_contacts()
{
	std::cout << "☏-----SAVED--CONTACTS:-----☏\n";
	int i = 0;
	while(i != this->i)
	{
		search_display(this->contact_arr[i], i + 1);
		i++;
	}
}

void PhoneBook::search()
{
	// display_all_contacts();
	std::string input = "";
	do
	{
		std::cout << "Enter index from 1 to 8 to find a contact: ";
		getline(std::cin, input);
		int index = this->is_format_correct(input);
		if(index)
		{
			search_display(this->contact_arr[index - 1], index);
			return;
		}
		else
			std::cout << "Invalid index! Please enter a number between 1 and 8: \n";
			
	} while (!this->is_format_correct(input));
}