#include <iostream>
#include <string>

/*
 *	캐스팅이 필요할까? 묵시적 변환이 될꺼같은데
 */
void	changeToUppercaseFromLowercase (std::string &str)
{
	for (int i = 0 ; i < str.size() ; ++i)
		str[i] = static_cast<char>(std::toupper(str[i]));
}

int main(int argc, char **argv)
{
	// 입력 1개 일 때
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	// 입력 1개가 아닐 때
	else
	{
		std::string buffer = "";
		for (int i = 1 ; i < argc ; ++i)
			buffer += static_cast<std::string>(argv[i]);
		changeToUppercaseFromLowercase(buffer);
    	std::cout << buffer << std::endl;
	}
	return 0;
}
