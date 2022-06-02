#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string name;
public:
    
    // 생성자
    Zombie(void);
    Zombie(std::string name);
    // 소멸자
    ~Zombie();
    
    //getter setter
    void    setName(std::string &name);

    // 맴버 함수
    void    announce(void);
};

// 전역 함수
Zombie*     zombieHorde(int N, std::string name);

#endif