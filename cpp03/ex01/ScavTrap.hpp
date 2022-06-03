#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	// 생성자
	ScavTrap(void);
	ScavTrap(std::string name);

	// 소멸자
	~ScavTrap(void);

	void guardGate(void);
};