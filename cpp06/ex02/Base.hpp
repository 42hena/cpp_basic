#ifndef BASE_HPP
#define BASE_HPP

class Base
{
private:

public:
	// Base(void);
	virtual ~Base(void);
};

Base*	generate(void);

void    identify(Base* p);
void	identify(Base& p);

#endif
