#ifndef DOG_HPP
#define DOG_HPP

#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
public:
	// 생성자
	Dog(void);

	// 소멸자
	virtual ~Dog(void);

	// 복사 생성자
	Dog(const Dog &dog);

	// 복사 대입 연산자
	Dog& operator=(const Dog &dog);

	// 멤버 함수
	virtual void	makeSound(void) const;
};

#endif