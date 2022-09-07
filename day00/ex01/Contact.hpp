#ifndef CONTACT
# define CONTACT

# include <iostream>
# include <string> //del
# include <iomanip>

class Contact {
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	Contact(void);
	~Contact();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
	void	setFirstName(std::string FirstName);
	void	setLastName(std::string LastName);
	void	setNickname(std::string Nickname);
	void	setPhoneNumber(std::string PhoneNumber);
	void	setDarkestSecret(std::string DarkestSecret);
};

#endif