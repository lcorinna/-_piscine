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

void	writing_to_file(std::ifstream& fin, std::fstream& fout, \
								std::string strtofind, std::string strtoreplace)
{
	std::string	tmp;
	std::string	ans;
	ans = "";
	while (!fin.eof()) {
		tmp = "";
		if (!ans.empty())
			fout << std::endl;
		ans = "";
		std::getline(fin, tmp);
		if (tmp.length() == 0)
			fout << std::endl;
		for (int i = 0; i < (int)tmp.length(); i++) {
			int k = 0;
			if (tmp[i] == strtofind[k] && i + (int)strtofind.length() <= (int)tmp.length()) {
				int j;
				for (j = i; j < i + (int)strtofind.length(); j++) {
					if (tmp[j] != strtofind[k])
						break;
					else
						k = k + 1;
				}
				if (j == i + (int)strtofind.length()) {
					ans.append(strtoreplace);
					i = j - 1;
				} else
					ans.push_back(tmp[i]);
			} else
				ans.push_back(tmp[i]);
		}
		fout << ans;
	}
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
	writing_to_file(fin, fout, (std::string)argv[2], (std::string)argv[3]);
	fin.close();
	fout.close();
	return 0;
}
