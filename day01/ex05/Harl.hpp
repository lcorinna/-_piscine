#ifndef HARL
# define HARL

# include <iostream>

class Harl {
	private:
		typedef void (Harl::*pfunc)(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	invalid_level(void);
		std::string	levels[5];
		pfunc	array_func[5];
	public:
		Harl();
		~Harl();
		void    complain(std::string level);
};

#endif