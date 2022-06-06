#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;

public:
	// 생성자
	Animal(void);

	// 소멸자
	~Animal(void);

	// 복사 생성자
	Animal(const Animal &animal);

	// 복사 대입 연산자
	Animal& operator=(const Animal &animal);

	// getter, setter
    std::string getType(void) const;
	void		setType(std::string type);

	// 멤버 함수
	virtual void	makeSound(void) const = 0;
};

#endif