//
// Created by wlouveni on 05.10.22.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H

#include "myAPB.h"
#include "Contact.h"

const short	PHONE_BOOK_MEMORY = 8;
class	PhoneBook {
	public:
		PhoneBook();

		void	add_contact();
		void	search_contact();

	private:
		int		currentContact;
		void 	fill_cell(std::string content, int n);
		void 	show_list();
		void 	show_contact();
		Contact arr[PHONE_BOOK_MEMORY];
};

#endif //EX01_PHONEBOOK_H
