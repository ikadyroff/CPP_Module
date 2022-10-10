//
// Created by wlouveni on 05.10.22.
//

#ifndef EX01_CONTACT_H
#define EX01_CONTACT_H

#include "myAPB.h"

class	Contact {

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	number;

	public:
		void 				create_contact();
		const std::string	&getFirstName() const;
		const std::string	&getLastName() const;
		const std::string	&getNickname() const;
		const std::string 	&getNumber() const;

};

#endif //EX01_CONTACT_H
