#include "header.h"

int main()
{
	std::string input = "";
	PhoneBook phoneBook;
	while(input != EXIT)
	{
		std::cout << "PHONEBOOK: ";
		getline(std::cin, input);
		if (input == ADD)
		{
			Contact contact; 
			contact.contact_setter();
			phoneBook.add(contact);
		}
		else if (input == SEARCH)
		{
			phoneBook.search();
		}
	} 	
	return 0;
}