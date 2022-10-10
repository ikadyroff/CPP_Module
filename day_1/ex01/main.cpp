//
// Created by wlouveni on 05.10.22.
//

# include "myAPB.h"

int	main()
{
	PhoneBook	phoneBook;
	std::string	input;
	bool		isWorking;

	isWorking = true;
	std::cout << "Welcome to my awesome phonebook!\n";
	while (isWorking == true)
    {
		std::cout << "Enter your command [ADD, SEARCH, EXIT]:\n";
		std::cin >> input;
        if (input == "ADD")
        {
			phoneBook.add_contact();
        }
        else if (input == "SEARCH")
        {
			phoneBook.search_contact();
        }
        else if (input == "EXIT")
        {
			std::cout << "Good bye!\n";
			isWorking = false;
        }
		else
		{
			std::cout << "Error! Invalid command!\n";
		}
		std::cin.clear();
    }
	return 0;
}