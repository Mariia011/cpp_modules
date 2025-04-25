/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:22:03 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/25 19:46:07 by marikhac         ###   ########.fr       */
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
	// int index = static_cast<int>(input[0]);
	// std::cout << "the index is "<< index;
	// if(!input.empty() && index >= 1 && index <= 8)
	// 	return index;
	// return 0;	
    if (!input.empty() && input[0] >= '1' && input[0] <= '8')
    {
        int index = input[0] - '0';  // Convert char digit to int
        std::cout << "The index is " << index << std::endl;
        return index;
    }
    return 0;

}

std::string PhoneBook::format_display(const std::string& SearchInfo) const
{
	std::string copy = SearchInfo;
	if(copy.length() > 10)
	{
		copy.resize(9);
		copy[9] = '.';
	}
	std::cout << copy;
	return copy;
}

void PhoneBook::search_display(const Contact& contact, int number)
{
	std::cout << "|" << number << "|" << format_display(contact.get_first_name()) << "|" << format_display(contact.get_last_name()) << "|" << format_display(contact.get_nickname());
	std::cout << "|" << format_display(contact.get_phone_number()) << "|" << format_display(contact.get_darkest_secret()) << "\n";
}

void PhoneBook::display_all_contacts()
{
	int i = 1;
	while(i != 5)
	{
		search_display(this->contact_arr[i - 1], i);
		i++;
	}
}

void PhoneBook::search()
{
	display_all_contacts();
	std::string input = "";
	std::cout << "Enter index from 1 to 8 to find a contact: ";
	std::cin >> input;
	if(int index = this->is_format_correct(input))
	{
		// std::cout << "meow " << index;
		search_display(this->contact_arr[index - 1], index);
	}
	else
        std::cout << "Invalid index! Please enter a number between 1 and 8: \n";
}