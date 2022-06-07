#ifndef CAT_HPP
#define CAT_HPP

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	// 생성자
	Cat(void);

	// 소멸자
	virtual ~Cat(void);

	// 복사 생성자
	Cat(const Cat &animal);

	// 복사 대입 연산자
	Cat& operator=(const Cat &animal);

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