#include "Contact.hpp"

Contact::Contact(void) {
	firstName = "";
}

Contact::~Contact() {}

std::string	Contact::getFirstName() { return firstName; }
std::string	Contact::getLastName() { return lastName; }
std::string	Contact::getNickname() { return nickname; }
std::string	Contact::getPhoneNumber() { return phoneNumber; }
std::string	Contact::getDarkestSecret() { return darkestSecret; }
void	Contact::setFirstName(std::string First_Name) { firstName = First_Name; }
void	Contact::setLastName(std::string Last_Name) { lastName = Last_Name; }
void	Contact::setNickname(std::string Nickname) { nickname = Nickname; }
void	Contact::setPhoneNumber(std::string Phone_Number) { phoneNumber = Phone_Number; }
void	Contact::setDarkestSecret(std::string Darkest_Secret) { darkestSecret = Darkest_Secret; }