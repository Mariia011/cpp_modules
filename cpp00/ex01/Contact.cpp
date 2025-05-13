#include "header.h"

Contact::Contact() : 
	first_name(""), 
	last_name(""), 
	nickname(""), 
	phone_number(""), 
	darkest_secret("")
{}

Contact::Contact (const Contact& other)
{
	if(this != &other)
	{
		this->first_name = other.first_name;	
		this->darkest_secret = other.darkest_secret;
		this->last_name = other.last_name;
		this->nickname = other.nickname;
		this->phone_number = other.phone_number;
	}
}


Contact& Contact::operator=(const Contact& other)
{
	if(this != &other)
	{
		this->first_name = other.first_name;	
		this->darkest_secret = other.darkest_secret;
		this->last_name = other.last_name;
		this->nickname = other.nickname;
		this->phone_number = other.phone_number;
	}
	return *this;
}

Contact::Contact(const std::string& first_name, 
				const std::string& last_name, 
				const std::string& phone_number, 
				const std::string& nickname,
				const std::string& darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->phone_number = phone_number;
	this->nickname = nickname;
	this->darkest_secret = darkest_secret;
}

Contact::~Contact()
{
	this->first_name.clear();
	this->darkest_secret.clear();
	this->last_name.clear();
	this->nickname.clear();
	this->phone_number.clear();
}

bool Contact::has_symbol(const std::string& input) const 
{
	for (unsigned long i = 0; i < input.length(); ++i)
	{
		if(input[i] < '0' || input[i] > '9')
			return true;
	}
	return false;
}

void Contact::input_phone_number(std::string& dest, const std::string msg)
{
	std::string input = "";
	do {
		std::cout << msg; 
		std::getline(std::cin, input);
		if(std::cin.eof())
		{
			throw std::logic_error("EOF");
		}
		if(this->has_symbol(input))
			std::cout << "Your phone number has symbol!\n";	
	} while (input.empty() || this->has_symbol(input));
	dest = input;
} 

void Contact::format_input(std::string& dest, const std::string msg)
{
	std::string input = ""; 
	while(input.empty())
	{
		std::cout << msg; 
		std::getline(std::cin, input);
		if(std::cin.eof())
		{
			throw std::logic_error("invlaid input bro");
		}
	}
	dest = input;
}

void Contact::contact_setter()
{
	format_input(this->first_name, "Enter your first name: ");
	format_input(this->last_name, "Enter your last name: ");
	format_input(this->nickname, "Enter your nickname: ");
	format_input(this->darkest_secret, "Enter your darkest_secret: ");
	input_phone_number(this->phone_number, "Enter your phone number: ");
}