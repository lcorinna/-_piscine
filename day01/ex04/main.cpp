#include <iostream>
#include <fstream>
#include <string>

bool	opening_files(char *filename, std::ifstream& fin, std::fstream& fout)
{
	std::string	path = filename;
	fin.open(path);
	if (!fin.is_open())
	{
		std::cout << "Could not open the file for reading" << std::endl;
		return false;
	}
	fout.open(path + ".replace", std::fstream::out);
	if (!fout.is_open())
	{
		std::cout << "Could not open the file for reading" << std::endl;
		fin.close();
		return false;
	}
	return true;
}

void	replace(std::ifstream& fin, std::fstream& fout, \
							std::string strtofind, std::string strtoreplace) {
	std::string	tmp;
	std::string	tmp1 = "";
	while (!fin.eof()) {
		std::getline(fin, tmp);
		if (tmp1.empty())
			tmp1 = tmp1 + tmp;
		else
			tmp1 = tmp1 + "\n" + tmp;
	}
	std::size_t	i = 0;
	std::size_t place = 0;
	place = tmp1.find(strtofind, i);
	while (place != ULLONG_MAX) {
		fout << tmp1.substr(i, place - i);
		fout << strtoreplace;
		i = place + strtofind.length();
		place = tmp1.find(strtofind, i);
	}
	fout << tmp1.substr(i, place - i);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Write the three parameters in the following order: ";
		std::cout << "the filename and two lines, s1 and s2." << std::endl;
		return 1;
	}
	std::ifstream fin;
	std::fstream fout;
	if (!opening_files(argv[1], fin, fout))
		return 1;
	replace(fin, fout, (std::string)argv[2], (std::string)argv[3]);
	fin.close();
	fout.close();
	return 0;
}
