#ifndef DOG_HPP
#define DOG_HPP

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	// 생성자
	Dog(void);

	// 소멸자
	virtual ~Dog(void);

	// 복사 생성자
	Dog(const Dog &dog);

	// 복사 대입 연산자
	Dog& operator=(const Dog &dog);

	// getter, setter
    std::string getType(void) const;
	void		setType(std::string type);

	Brain*		getBrainPTR() const;
	std::string	getBrainString(const Brain *ptr, int i) const;

	// 멤버 함수
	virtual void	makeSound(void) const;

	void			showAllType(void);
};

#endif