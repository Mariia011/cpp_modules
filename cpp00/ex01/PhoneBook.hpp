#ifndef __PHONEBOOK_HPP__ 
#define __PHONEBOOK_HPP__ 

#include "header.h"

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
	std::string format_display(const std::string&) const;
	void search_display(const Contact&, int);
	bool has_symbol(std::string);
	void display_all_contacts();
private:
	int	 is_format_correct(const std::string);

private:
	Contact contact_arr[CONTACT_MAX];
	int i;
//delete phone numbers and darkest secret in display  
};

#endif //__PHONEBOOK_HPP__ 