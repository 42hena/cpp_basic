
#include "Convert.hpp"

Convert::Convert(void)
	: input(""), value(0.0), flag(false), alphaFlag(false)
{ }

Convert::Convert(const std::string input)
	: input(input), value(0.0), flag(false), alphaFlag(false)
{
	if (input.size() == 1 && !isdigit(input[0]))
	{
		alphaFlag = true;
		value = static_cast<double>(input[0]);
	}
}

Convert::Convert(const Convert &convert)
	: input(convert.input), value(convert.value), flag(convert.flag), alphaFlag(convert.alphaFlag)
{ }

Convert::~Convert(void)
{ }

Convert &Convert::operator=(const Convert &convert)
{
	*this = convert;
	return *this;
}

char Convert::toChar() const
{
	int tmp = this->toInt();
	
	if (isprint(tmp))
		return static_cast<char>(tmp);
	else if (tmp > 255 || tmp < 0)
		throw Convert::ImpossibleException();
	else
		throw Convert::NonDisplayableException();
}

int Convert::toInt() const
{
	try
	{
		int tmp;
		if (alphaFlag)
			tmp = (int)value;
		else
			tmp = std::stoi(this->input);
		return tmp;
	}
	catch (std::exception &e)
	{
		throw Convert::ImpossibleException();
	}
}
float Convert::toFloat() const
{
	try
	{
		float tmp;
		if (alphaFlag)
			tmp = value;
		else
			tmp = std::stof(this->input);
		return tmp;
	}
	catch (std::exception &e)
	{
		throw Convert::ImpossibleException();
	}
}
double Convert::toDouble() const
{
	try
	{
		double tmp;
		if (alphaFlag)
			tmp = value;
		else
			tmp = std::stod(this->input);
		return tmp;
	}
	catch (std::exception &e)
	{
		throw Convert::ImpossibleException();
	}
}

std::string Convert::getInput() const
{
	return this->input;
}

const char *Convert::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char *Convert::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}
