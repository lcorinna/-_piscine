#ifndef CONTACT
# define CONTACT

# include <iostream>
# include <string>
# include <iomanip>

class Contact {
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	Contact(void);
	~Contact(void);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
	void	setFirstName(std::string First_Name);
	void	setLastName(std::string Last_Name);
	void	setNickname(std::string Nickname);
	void	setPhoneNumber(std::string Phone_Number);
	void	setDarkestSecret(std::string Darkest_Secret);
};

#endif