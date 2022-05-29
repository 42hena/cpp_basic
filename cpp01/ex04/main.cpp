#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string ft_replace(std::string &line, std::string s1, std::string s2)
{
	std::string::size_type start = 0;
	std::string::size_type num;
	std::string after = line;

	while ((num = after.find(s1, start)) != std::string::npos)
	{
		after.erase(num, s1.length());
		after.insert(num, s2);
		start = num + s2.length();
	}
	return after;
}

void run_process(std::string &filename, std::string &from, std::string &to)
{
	std::ifstream input;

	input.open(filename, std::ifstream::in | std::ifstream::binary);
	if (!input.good())
	{
		std::cout << "file open ERROR" << std::endl;
		return ;
	}
	std::ostringstream ss;
	ss << input.rdbuf();
	std::string changeBeforeString = ss.str();
	input.close();

	std::string changeAfterString = ft_replace(changeBeforeString, from, to);
	std::ofstream output;
	output.open(filename + ".replace", std::ofstream::out | std::ofstream::trunc);
	if (!output.good())
	{
		std::cout << "file open ERROR" << std::endl;
		return ;
	}
	output << changeAfterString;
	output.close();
	
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "argc must 4 T.T" << std::endl;
	}
	else
	{
		std::string file(argv[1]);
		std::string from(argv[2]);
		std::string to(argv[3]);
		run_process(file, from, to);
	}
}