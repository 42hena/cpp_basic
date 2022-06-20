#include <iostream>
using namespace std;

int main(void)
{
    string name, phoneNumber;

    cout << "이름: ";
    cin >> name;

    cout << "전화번호: ";
    cin >> phoneNumber;

    cout << name << ' ' << phoneNumber << endl;

    return 0;
}