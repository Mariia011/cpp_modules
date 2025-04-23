#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include "header.h"

class Contact
{
public:
	Contact(); //default constructor
	Contact(const Contact&); //copy constructor
	Contact(
		const std::string&, 
		const std::string&, 
		const std::string&, 
		const std::string&, 
		const std::string&); // parametric constructor
		~Contact(); //destructor	
		Contact& operator=(const Contact&); // copy assignment
public:
	void contact_setter();
	void format_input(std::string& dest, const std::string msg);
	private: 
	void input_phone_number(std::string& dest, const std::string msg);
	bool has_symbol(const std::string&) const;
	// getters 
public:
	std::string get_first_name() const { return first_name; }
	std::string get_last_name() const { return last_name; }
	std::string get_nickname() const { return nickname; }

// Getter methods
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
// operator<< >> //stdoutput operator override in a custom class 
};

#endif