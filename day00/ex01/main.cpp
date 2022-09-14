#include "Phone_book.hpp"

void	add_new_contact(Phone_book *pocket) {
	static int	i = 0;
	std::string	input;

	std::cout << "Write the name" << std::endl;
	std::cin >> input;
	pocket->getContact()[i].setFirstName(input);

	std::cout << "Write the last name" << std::endl;
	std::cin >> input;
	pocket->getContact()[i].setLastName(input);

	std::cout << "Write a nickname" << std::endl;
	std::cin >> input;
	pocket->getContact()[i].setNickname(input);

	std::cout << "Write the phone number" << std::endl;
	std::cin >> input;
	pocket->getContact()[i].setPhoneNumber(input);

	std::cout << "Write the darkest secret" << std::endl;
	std::cin >> input;
	pocket->getContact()[i].setDarkestSecret(input);
	std::cout << "Added contact number " << (i + 1) << std::endl << std::endl;
	++i;
	if (i == 8)
		i = 0;
}

void	printing_contacts(Phone_book *pocket) {
	for (int i = 0; i != 8; ++i) {
		if (pocket->getContact()[i].getFirstName() != "") {
			std::cout << " __________ __________ __________ __________ " << std::endl;
			std::cout  << "|" << std::setw(10) << std::right << (i + 1) << "|";

			if (pocket->getContact()[i].getFirstName().size() > 9)
				std::cout << std::setw(9) << std::right << \
				pocket->getContact()[i].getFirstName().substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << std::right << \
				pocket->getContact()[i].getFirstName() << "|";

			if (pocket->getContact()[i].getLastName().size() > 9)
				std::cout << std::setw(9) << std::right << \
				pocket->getContact()[i].getLastName().substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << std::right << \
				pocket->getContact()[i].getLastName() << "|";
			
			if (pocket->getContact()[i].getNickname().size() > 9)
				std::cout << std::setw(9) << std::right << \
				pocket->getContact()[i].getNickname().substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << std::right << \
				pocket->getContact()[i].getNickname() << "|";
			std::cout << std::endl;
		}
	}
}

void	contact_search(Phone_book *pocket, int i) {
	std::cout << "First name:\t";
	std::cout << pocket->getContact()[i].getFirstName() << std::endl;
	std::cout << "Last name:\t";
	std::cout << pocket->getContact()[i].getLastName() << std::endl;
	std::cout << "Nickname:\t";
	std::cout << pocket->getContact()[i].getNickname() << std::endl;
	std::cout << "Phone number:\t";
	std::cout << pocket->getContact()[i].getPhoneNumber() << std::endl;
	std::cout << "Darkes secret:\t";
	std::cout << pocket->getContact()[i].getDarkestSecret() << std::endl;
}

void search_contact(Phone_book *pocket) {
	std::cout << " __________ __________ __________ __________ " << std::endl;
	std::cout << "|Index     |Name      |Last Name |Nickname  |" << std::endl;
	if (!pocket->getContact()[0].getFirstName().empty())
			printing_contacts(pocket);
	std::cout << " __________ __________ __________ __________ " << std::endl << std::endl;
	char	i;
	std::cout << "Specify the contact's index" << std::endl;
	std::cin >> i;
	if (i > 48 && i < 57){
		i -= 49;
		if (!pocket->getContact()[(int)i].getFirstName().empty())
			contact_search(pocket, i);
		else
			std::cout << "This contact was not found" << std::endl;
	}
	else
		std::cout << "The index is set in the digit format in the range from 1 to 8" << std::endl;
}

int	main(void) {
	Phone_book	pocket;
	std::string	command;

	std::cout << "What do you want, master? \
To manage, use the commands \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
	while (true) {
		std::cin >> command;
		if (command == "ADD")
			add_new_contact(&pocket);
		else if (command == "SEARCH")
			search_contact(&pocket);
		else if (command == "EXIT" || command.empty())
			return 0;
		std::cout << "To manage, use the commands \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
	}
	return 0;
}