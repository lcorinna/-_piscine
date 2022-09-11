#ifndef ZOMBIE
# define ZOMBIE

# include <iostream>

class Zombie{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	std::string	getName();
	void	setName(std::string	Name);
	void	announcement( void );
} ;

#endif