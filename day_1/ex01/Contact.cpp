//
// Created by wlouveni on 05.10.22.
//

#include "myAPB.h"

//Contact::Contact() {
//	firstName = "";
//	lastName = "";
//	nickname = "";
//	number = "";
//}

void Contact::create_contact() {
	std::cout << "First name:\n";
	std::cin  >> firstName;
	std::cout << "Last name:\n";
	std::cin  >> lastName;
	std::cout << "Nickname:\n";
	std::cin  >> nickname;
	std::cout << "Phone number:\n";
	std::cin  >> number;
}

const std::string &Contact::getFirstName() const {
	return firstName;
}

const std::string &Contact::getLastName() const {
	return lastName;
}

const std::string &Contact::getNickname() const {
	return nickname;
}

const std::string &Contact::getNumber() const {
	return number;
}

