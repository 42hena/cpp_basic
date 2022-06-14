#include <string>
#include <stdint.h>

class Data
{
private:
	// 멤버 변수
	bool		boolValue;
	char		charValue;
	std::string	stringValue;
	int			intValue;
	float		floatValue;
	double		doubleValue;

public:
	// 생성자
	Data(void);

	// 소멸자
	~Data(void);

	// 복사 생성자
	Data(const Data &data);

	// 복사 대입 연산자
	Data& operator=(const Data &data);

	// getter, setter
	const bool&			getBoolValue(void)		const;
	const char&			getCharValue(void)		const;
	const std::string&	getStringValue(void)	const;
	const int&			getIntValue(void)		const;
	const float&		getFloatValue(void)		const;
	const double&		getDoubleValue(void)	const;
};

std::ostream& operator<<(std::ostream& out, const Data& data);

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
