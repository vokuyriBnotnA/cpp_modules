#include "PhoneBook.h"

Contact::Contact()
{
	this->FirstName.clear();
	LastName.clear();
	Nickname.clear();
	PhoneNumber.clear();
	DarkestSecret.clear();
}

bool Contact::isNumber(std::string number)
{
	for (std::string::size_type i = 0, len = number.size(); i < len; i++)
	{
		if ((number[i] < '0' || number[i] > '9') && number[i] != '-')
			return (false);
	}
	return (true);
}

bool Contact::addSomeField(int field, std::string value)
{
	switch (field)
	{
	case FirstNameCase:
		FirstName = value;
		break;
	case LastNameCase:
		LastName = value;
		break;
	case NicknameCase:
		Nickname = value;
		break;
	case PhoneNumberCase:
		if (!isNumber(value))
			return (false);
		PhoneNumber = value;
		break;
	case DarkestSecretCase:
		DarkestSecret = value;
		break;
	
	default:
		break;
	}
	return (true);
}

std::string Contact::getSomeField(int field)
{
	switch (field)
	{
	case FirstNameCase:
		return (FirstName);
		break;
	case LastNameCase:
		return (LastName);
		break;
	case NicknameCase:
		return (Nickname);
		break;
	case PhoneNumberCase:
		return (PhoneNumber);
		break;
	case DarkestSecretCase:
		return (DarkestSecret);
		break;
	
	default:
		break;
	}
	return (NULL);
}

void Contact::printContact()
{
	std::cout << std::endl;
	std::cout << "First name: " << FirstName << std::endl;
	std::cout << "Last name: " << LastName << std::endl;
	std::cout << "Nickname: " << Nickname << std::endl;
	std::cout << "Phone number: " << PhoneNumber << std::endl;
	std::cout << "Darkest secret: " << DarkestSecret << std::endl;
	std::cout << std::endl;
}