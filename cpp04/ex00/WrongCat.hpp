#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// 생성자
	WrongCat(void);

	// 소멸자
	~WrongCat(void);

	// 복사 생성자
	WrongCat(const WrongCat &animal);

	// 복사 대입 연산자
	WrongCat& operator=(const WrongCat &animal);

	// getter, setter
    std::string getType(void) const;
	void		setType(std::string type);

	// 멤버 함수
	void	makeSound(void) const;
};

#endif