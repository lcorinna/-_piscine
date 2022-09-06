#include "Phone_book.hpp"
#include "Contact.hpp"

void	add_new_contact(Phone_book *pocket) {
	static int	i = -1;
	std::string	input;

	++i;
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
	if (i == 7)
		i = -1;
}

void search_contact(Phone_book *pocket) {
	(void) pocket;
	std::cout << " __________ __________ __________ __________ " << std::endl;
	std::cout << "|   Index  |    Name  | Last Name| Nickname |" << std::endl;
	for (int i = 0; i != 7; ++i) {
		if (pocket->getContact()[i].getFirstName() != "") {
			std::cout << " __________ __________ __________ __________ " << std::endl;
			std::cout << "|";
			std::cout.width(10);
			std::cout << (i + 1);
			std::cout.width(10);
			std::cout << pocket->getContact()[i].getFirstName();
			std::cout.width(10);
			std::cout << pocket->getContact()[i].getLastName();
			std::cout.width(10);
			std::cout << pocket->getContact()[i].getNickname();
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " __________ __________ __________ __________ " << std::endl << std::endl;

} 

// Each column must be 10 characters wide. A pipe character (’|’) separates them. 
// The text must be right-aligned. 
// If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).

int	main(void) {
	Phone_book	pocket;
	std::string	command;

	std::cout << "What do you want, master? \
To manage, use the commands \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
	std::cin >> command;
	while (true) {
		if (command == "ADD")
			add_new_contact(&pocket);
		else if (command == "SEARCH")
			search_contact(&pocket);
		else if (command == "EXIT")
			return 0;
		std::cout << "To manage, use the commands \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
		std::cin >> command;
	}
	return 0;
}