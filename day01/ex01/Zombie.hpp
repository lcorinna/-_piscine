#ifndef ZOMBIE
# define ZOMBIE

# include <iostream>

class Zombie{
private:
	std::string	_name;
public:
	Zombie();
	~Zombie();
	std::string	getName() const;
	void	setName(std::string	Name);
	void	announcement( void );
} ;

#endif