#ifndef __PHONEBOOK_HPP__ 
#define __PHONEBOOK_HPP__ 

// class Contact; //this is a forward declaration
#include "header.h"
// #include "Contact.hpp"

class PhoneBook 
{
public:
	PhoneBook();
	PhoneBook(const PhoneBook&);
	~PhoneBook();
public: 
	void add(const Contact&);
	void search();
	void add_helper(const Contact&);
	void format_display(const std::string&) const;
	void search_display(const Contact& someContact, int number);
	bool has_symbol(std::string);
private:
	int	 is_format_correct(const std::string input);
	// void search_display(const Contact&, int number);

private:
	Contact contact_arr[CONTACT_MAX];
	int i;
};

#endif //__PHONEBOOK_HPP__ 