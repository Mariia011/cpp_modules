#include "header.h"

int main()
{
	try {

		std::string input = "";
		PhoneBook phoneBook;
		while(input != EXIT)
		{
			std::cout << "PHONEBOOK: ";
			getline(std::cin, input);
			if(std::cin.eof())
			{
				throw std::logic_error("EOF\n");
			}
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
	} catch(std::exception& error) {
		std::clog << std::endl;
		std::clog << error.what() << std::endl;
	}
	return 0;
}