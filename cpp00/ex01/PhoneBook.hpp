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
	void 		add(const Contact&);
	void 		search();
	void 		display_format(const Contact&, int);
	void 		display_of_existing_contact(const Contact& contact);
	bool 		has_symbol(std::string);
	void 		display_all_contacts();
	std::string format_display(const std::string&) const;
private:
	int	 is_format_correct(const std::string);

private:
	Contact contact_arr[CONTACT_MAX];
	int i;
};

#endif //__PHONEBOOK_HPP__ 