#include <iostream>

#include "Data.hpp"

// 생성자
Data::Data(void)
	: boolValue(false),
	charValue('a'),
	stringValue("42 Seoul coding children hena :("),
	intValue(42),
	floatValue(42.0f),
	doubleValue(42.0)
{
	std::cout << "Data 생성자 입니다 :)" << std::endl;
}

// 소멸자
Data::~Data(void)
{
	std::cout << "Data 소멸자 입니다 :)" << std::endl;
}

// 복사 생성자
Data::Data(const Data &data)
{
	*this = data;
}

// 복사 대입 연산자
Data& Data::operator=(const Data &data)
{
	if (this != &data)
		*this = data;
	return *this;
}

// getter
const bool&				Data::getBoolValue(void)		const
{
	return this->boolValue;
}

const char&				Data::getCharValue(void)		const
{
	return this->charValue;
}

const std::string&		Data::getStringValue(void)		const
{
	return this->stringValue;
}

const int&				Data::getIntValue(void)			const
{
	return this->intValue;
}

const float&			Data::getFloatValue(void)		const
{
	return this->floatValue;
}

const double&			Data::getDoubleValue(void)		const
{
	return this->doubleValue;
}

// 전역 함수
uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

std::ostream &operator<<(std::ostream &out, const Data &data)
{
	return out	<< "Address : " << &data << std::endl
				<< "boolValue : [" << data.getBoolValue() << "]" << std::endl
				<< "charValue : [" << data.getCharValue() << "]" << std::endl
				<< "stringValue : [" << data.getStringValue() << "]" << std::endl
				<< "intValue : [" << data.getIntValue() << "]" << std::endl
				<< "floatValue : [" << data.getFloatValue() << "]" << std::endl
				<< "doubleValue : [" << data.getDoubleValue() << "]" << std::endl
				;
}