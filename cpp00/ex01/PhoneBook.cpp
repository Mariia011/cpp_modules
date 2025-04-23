/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:22:03 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/23 20:03:20 by marikhac         ###   ########.fr       */
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
	Contact tmp = contact;
	
	for(int i = CONTACT_MAX - 1; i > 0; --i)
	{
		Contact shift = this->contact_arr[i];
		this->contact_arr[i] = this->contact_arr[CONTACT_MAX - 1];
		this->contact_arr[CONTACT_MAX - 1] = shift;
	}
	contact_arr[this->i] = tmp;
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
	int number = 0;
	if(input.length() == 1 && input[0] >= '1' && input[0] <= '8')
		number = input[0];
	return number;
}


void PhoneBook::format_display(const std::string& input) const 
{
	if (input.size() >= 10)
	{
		for (int i = 0; i < 10; ++i)
		{
			std::cout << input[i];			
		}		
		std::cout << ".";
	}
	else
		std::cout << input;
}

// void PhoneBook::search_display(const Contact& contact, int number)
// {
	// std::cout << "|" << number << "|" << format_display(contact.get_first_name()) << "|" << format_display(contact.get_last_name()) << "|" << format_display(contact.get_nickname()); 
// }

void PhoneBook::search()
{
	std::string input = "";
	std::cout << "Enter index from 1 to 8 to find a contact";
	std::cin >> input;
	if(int index = this->is_format_correct(input))
	{
		std::cout << "meow";
		// search_display(this->contact_arr[index - 1], index);
	}
	else
        std::cout << "Invalid index! Please enter a number between 1 and 8.\n";
}