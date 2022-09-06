#include "Contact.hpp"

Contact::Contact(void) {
	first_name = "";
	last_name = "";
}

Contact::~Contact() {}

std::string	Contact::getFirstName() { return first_name; }
std::string	Contact::getLastName() { return last_name; }
std::string	Contact::getNickname() { return nickname; }
std::string	Contact::getPhoneNumber() { return phone_number; }
std::string	Contact::getDarkestSecret() { return darkest_secret; }
void	Contact::setFirstName(std::string FirstName) { first_name = FirstName; }
void	Contact::setLastName(std::string LastName) { last_name = LastName; }
void	Contact::setNickname(std::string Nickname) { nickname = Nickname; }
void	Contact::setPhoneNumber(std::string PhoneNumber) { phone_number = PhoneNumber; }
void	Contact::setDarkestSecret(std::string DarkestSecret) { darkest_secret = DarkestSecret; }