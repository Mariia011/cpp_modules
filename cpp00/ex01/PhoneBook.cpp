
#include "header.h"

PhoneBook::PhoneBook()
{	
	this->i = 0;
}

PhoneBook::~PhoneBook(){}

PhoneBook::PhoneBook(const PhoneBook&){}

void PhoneBook::add(const Contact& contact)
{
	this->contact_arr[this->i % CONTACT_MAX] = contact;
	i++;
}

int PhoneBook::is_format_correct(const std::string input)
{		
	if(std::cin.eof())
	{
		return 0;
	}
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
		return copy.substr(0, 9) + ".";
    else
        return std::string(10 - copy.length(), ' ') + copy;
}

void PhoneBook::display_format(const Contact& contact, int index)
{
	std::string tmp = "";
	tmp += (index + '0');
	if(!contact.get_first_name().empty())
	{
		std::cout << "|" << format_display(tmp) << "|" << format_display(contact.get_first_name()) << "|" << format_display(contact.get_last_name());
		std::cout << "|" << format_display(contact.get_nickname()) << "|\n";
	}
	else
		display_all_contacts();
}

void PhoneBook::display_of_existing_contact(const Contact& contact)
{
	std::cout <<  "\nfirst name: " << contact.get_first_name() << std::endl;
	std::cout <<  "last name: " << contact.get_last_name() << std::endl;
	std::cout << "nickname: " << contact.get_nickname() << std::endl;
	std::cout << "phone number: " << contact.get_phone_number() << std::endl;
	std::cout << "darkest secret: " << contact.get_darkest_secret() << "\n";
}

void PhoneBook::display_all_contacts()
{
	std::cout << "☏--------------SAVED---CONTACTS:--------------☏\n";
	int i = 0;
	while(i != this->i)
	{
		display_format(this->contact_arr[i], i + 1);
		i++;
	}
}

void PhoneBook::search()
{
	display_all_contacts();
	std::string input = "";
	do
	{
		std::cout << "Enter index from 1 to 8 to find a contact: ";
		getline(std::cin, input);
		if(std::cin.eof())
		{
			throw std::logic_error("EOF");
		}
		int index = this->is_format_correct(input);
		if(index)
		{
			display_of_existing_contact(this->contact_arr[index - 1]);
			return;
		}
		else
			std::cout << "Invalid index! Please enter a number between 1 and 8: \n";
			
	} while (!this->is_format_correct(input));
}