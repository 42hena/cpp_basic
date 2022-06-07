#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	// 생성자
	WrongAnimal(void);
	WrongAnimal(std::string type);

	// 소멸자
	~WrongAnimal(void);

	// 복사 생성자
	WrongAnimal(const WrongAnimal &animal);

	// 복사 대입 연산자
	WrongAnimal& operator=(const WrongAnimal &animal);

	// getter, setter
    std::string getType(void) const;
	void		setType(std::string type);

	// 멤버 함수
	void	makeSound(void) const;
};

#endif