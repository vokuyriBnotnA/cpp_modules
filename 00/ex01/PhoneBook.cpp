#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	indexCurrent = 0;
	index = 0;
}

void PhoneBook::openPhoneBook()
{
	std::string line;
	
	while (true)
	{
		std::cout << "Choose command: ADD, SEARCH or EXIT" << std::endl;
		if (!(std::getline(std::cin, line)))
			break;
		if (line == "ADD")
		{
			if (!addContact())
				break;
		}
		else if (line == "SEARCH")
			print();
		else if (line == "EXIT")
			return ;
		else if (line != "")
			std::cout << "Wrong command. ";
	}
}

bool PhoneBook::inputData(int field, std::string message)
{
	std::string value;

	while (true)
	{
		std::cout << message;
		if (!(std::getline(std::cin, value)))
			break;
		else if (value == "")
			continue;
		else if (!arr[indexCurrent].addSomeField(field, value))
		{
			std::cout << "Wrong data" << std::endl;
			continue;
		}
		else
			return (true);
	}
	return (false);
}

bool PhoneBook::addContact()
{
	if (indexCurrent >= 8)
		indexCurrent = 0;

	if (!inputData(FirstNameCase, "First name: "))
		return (false);
	if (!inputData(LastNameCase, "Last name: "))
		return (false);
	if (!inputData(NicknameCase, "Nickname: "))
		return (false);
	if (!inputData(PhoneNumberCase, "Phone number: "))
		return (false);
	if (!inputData(DarkestSecretCase, "Darkest secret: "))
		return (false);

	indexCurrent++;
	index++;

	return (true);
}

void PhoneBook::print()
{
	std::cout << "# |";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (!arr[i].getSomeField(FirstNameCase).empty())
		{
			std::cout << (i + 1) << " |";

			for (int field = 0; field < 3; field++)
			{
				if (arr[i].getSomeField(field).length() > 10)
					std::cout << arr[i].getSomeField(field).substr(0, 9) << ".|";
				else
					std::cout << std::setw(10) << arr[i].getSomeField(field) << "|";
			}			
			std::cout << std::endl;
		}
	}

	//Search some contact.
	std::string line;

	while (true)
	{
		std::cout << "Choose contact number or EXIT" << std::endl;
		if (!(std::getline(std::cin, line)))
			break;
		if (line.length() == 1 && ((int) line[0] - 48) <= index && ((int) line[0] - 48) > 0 && ((int) line[0] - 48) <= 8)
			arr[(int) (line[0] - 49)].printContact();
		else if (line == "EXIT")
			return;
		else if (line != "")
			std::cout << "Wrong command. ";
	}
}