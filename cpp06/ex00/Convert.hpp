#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Convert
{
private:
	std::string input;
	double		value;
	bool		flag;
	bool		alphaFlag;

	Convert(void);

public:
	Convert(const std::string input);
	Convert(const Convert &a);
	~Convert();

	Convert &operator=(const Convert &a);

	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;

	std::string getInput() const;
	class ImpossibleException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class NonDisplayableException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
