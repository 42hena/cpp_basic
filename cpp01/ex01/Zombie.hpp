#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
public:
    std::string name;
    // 생성자
    Zombie(std::string name);
    // 소멸자
    ~Zombie();
    
    // 맴버 함수
    void announce(void);
};

// 전역 함수
Zombie *zombieHorde(int N, std::string name);

#endif