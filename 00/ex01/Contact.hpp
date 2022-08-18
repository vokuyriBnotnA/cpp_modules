#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.h"

class Contact
{
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
	
	bool isNumber(std::string number);

	public:

	Contact();
	bool addSomeField(int field, std::string value);
	std::string getSomeField(int field);
	void printContact();

};

#endif