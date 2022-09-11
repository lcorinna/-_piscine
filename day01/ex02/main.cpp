#include <iostream>

int	main(void) {
	std::string	 first_words = "HI THIS IS BRAIN";
	std::string *first_wordsPTR = &first_words;
	std::string &first_wordsREF = first_words;

	std::cout << "adress first_words:	" << &first_words << std::endl;
	std::cout << "adress first_wordsPTR:	" << *&*&*&*&*&first_wordsPTR << std::endl;
	std::cout << "adress first_wordsREF:	" << &first_wordsREF << std::endl << std::endl;

	std::cout << "value first_words:	" << first_words << std::endl;
	std::cout << "value first_wordsPTR:	" << *first_wordsPTR << std::endl;
	std::cout << "value first_wordsREF:	" << first_wordsREF << std::endl;
	return 0;
}

// ref - постоянный указатель (ссылка)