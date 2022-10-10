//
// Created by wlouveni on 05.10.22.
//

#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	currentContact = 0;
}

void	PhoneBook::add_contact() {
	arr[currentContact].create_contact();
	currentContact++;
	if (currentContact == PHONE_BOOK_MEMORY)
		currentContact = 0;
}

void	PhoneBook::search_contact() {
		show_list();
		show_contact();
}


void	PhoneBook::show_list() {
	int i = 0;
	int j = 1;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (; i < PHONE_BOOK_MEMORY; i++) {
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << j  << "|";
		fill_cell(arr[i].getFirstName(), 9);
		fill_cell(arr[i].getLastName(), 9);
		fill_cell(arr[i].getNickname(), 9);
		std::cout << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		j++;
	}
	std::cout << std::endl;
}

void	PhoneBook::fill_cell(std::string content, int n) {
	if (content.length() > 10) {
		std::cout << std::setw(n);
		std::cout << content.substr(0, 9) << ".|";
	}
	else {
		std::cout << std::setw(10);
		std::cout << content << "|";
	}
}

void	PhoneBook::show_contact() {
	int	input;

	std::cout << "Enter contact index [1 - " << PHONE_BOOK_MEMORY << "]:" << std::endl;
	std::cin >> input;
	if (input < 1 || input > PHONE_BOOK_MEMORY) {
		std::cout << "Invalid index." << std::endl;
		std::cin.ignore(1000, '\n');
	}
	else {
		if (arr[input - 1].getFirstName().empty())
		{
			std::cout << "Contact is empty." << std::endl;
			std::cin.ignore(1000, '\n');
		}
		else {
			std::cout << "First name:	" << arr[input - 1].getFirstName() << std::endl;
			std::cout << "Last name:	" << arr[input - 1].getLastName() << std::endl;
			std::cout << "Nickname:	" << arr[input - 1].getNickname() << std::endl;
			std::cout << "Phone number:	" << arr[input - 1].getNumber() << std::endl;
		}
	}
	std::cin.clear();
}
