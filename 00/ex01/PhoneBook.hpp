#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBook.h"

class PhoneBook
{
	int			indexCurrent;
	int			index;
	Contact		arr[8];

	public:
	
	PhoneBook();
	void openPhoneBook();
	bool addContact();
	void print();
	bool inputData(int field, std::string message);
};

#endif