#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact() {}

std::string	Contact::getFirstName() { return _firstName; }
std::string	Contact::getLastName() { return _lastName; }
std::string	Contact::getNickname() { return _nickname; }
std::string	Contact::getPhoneNumber() { return _phoneNumber; }
std::string	Contact::getDarkestSecret() { return _darkestSecret; }
void	Contact::setFirstName(std::string First_Name) { _firstName = First_Name; }
void	Contact::setLastName(std::string Last_Name) { _lastName = Last_Name; }
void	Contact::setNickname(std::string Nickname) { _nickname = Nickname; }
void	Contact::setPhoneNumber(std::string Phone_Number) { _phoneNumber = Phone_Number; }
void	Contact::setDarkestSecret(std::string Darkest_Secret) { _darkestSecret = Darkest_Secret; }